import items
import pokemon as poke
import random
import levels


class Generator():

    def __init__(self):
        items.computeWeights()
        levels.computeWeights()
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
        balls = "@ balls\n"
        for x in self.LEVEL_ORDER:
            for y in range(self.BALL_PER_LEVEL):
                balls += self.genBall(x, y+1)
        return balls + "\n"

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
        warps = "@ warps\n"
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
        return warps + "\n"

    def genTrainer(self, level, levelID, nPoke, trainerID):
        """Generates a trainer."""
        trainer = f"const struct TrainerMonItemDefaultMoves gTrainerParty_L{levelID}_{trainerID}[] = {{"
        for i in range(nPoke):
            pokemon = poke.getRandomPokemonOf(levels.getType(levelID - 1))
            trainer += f"""
{{
    .iv = {random.randint(0, 255)},
    .lvl = {level},
    .species = {pokemon},
    .heldItem = {items.getRandomItem()}
}}"""
            if i + 1 < nPoke:
                trainer += ","
        trainer += "};\n"
        return trainer

    def genTrainers(self):
        trainers = ""
        for i in range(len(self.LEVEL_ORDER)):
            for j in range(len(levels.TRAINER_NB[self.LEVEL_ORDER[i] - 1])):
                trainers += self.genTrainer(
                    i+1, self.LEVEL_ORDER[i], levels.TRAINER_NB[self.LEVEL_ORDER[i] - 1][j], j+1)
        return trainers + "\n"

    def genEncounter(self, level, levelID):
        we = f"""const struct WildPokemon gL{levelID}_LandMons[] =
{{"""
        for _ in range(12):
            we += f"{{{level}, {level}, {poke.getRandomPokemonOf(levels.getType(levelID - 1))}}},\n"
        we += f"""
}};

const struct WildPokemonInfo gL{levelID}_LandMonsInfo = {{{random.randint(5,15)}, gL{levelID}_LandMons}};
"""
        return we

    def genEncounters(self):
        encounters = ""
        for i in range(len(self.LEVEL_ORDER)):
            encounters += self.genEncounter(i+1, self.LEVEL_ORDER[i])
        return encounters + "\n"

    def getStarters(self):
        starters = ""
        for i in range(3):
            starters += poke.getRandomPokemon()
            if i < 2:
                starters += ",\n    "
        return starters + "\n"