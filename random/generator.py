import items
import pokemon as poke
import random
import levels


class Generator():

    def __init__(self):
        items.computeWeights()
        self.LEVEL_NB = 2
        self.BALL_PER_LEVEL = 2
        self.LEVEL_ORDER = [i for i in range(1, self.LEVEL_NB+1)]
        random.shuffle(self.LEVEL_ORDER)

    def genBall(self, level, id):
        return f"""
Level_{level}_Ball_{id}::
    giveitem_std {items.getRandomItem()}, 1, 1
    end
"""

    def genBalls(self):
        balls = "@ balls\n\n"
        for x in self.LEVEL_ORDER:
            for y in range(self.BALL_PER_LEVEL):
                balls += self.genBall(x, y+1)
        return balls

    def genWarp(self, lvl, nextLvl):
        return f"""
Level_{lvl}_Warp::
    lock
    faceplayer
    msgbox Level_WarpMessage, MSGBOX_YESNO
    switch VAR_RESULT
    case 1, Level_{lvl}_TeleportScript
    release
    end

Level_{lvl}_TeleportScript:
    warpteleport MAP_LEVEL_{nextLvl}, 255, {levels.getPos(nextLvl)}
    waitstate
    releaseall
    end
"""

    def genWarps(self):
        warps = "@ warps\n\n"
        # Lobby to the first level
        l1 = self.LEVEL_ORDER[0]
        warps += f"""
Lobby_TeleportScript::
    warpteleport MAP_LEVEL_{l1}, 255, {levels.getPos(l1)}
    waitstate
    releaseall
    end
"""
        # Level i to i+1
        for i in range(1, self.LEVEL_NB):
            warps += self.genWarp(self.LEVEL_ORDER[i-1], self.LEVEL_ORDER[i])
        warps += self.genWarp(self.LEVEL_ORDER[-1], self.LEVEL_ORDER[-1])
        # Warp message
        warps += f"""
Level_WarpMessage:
    .string \"Warp to the next level?$\"
"""
        return warps
