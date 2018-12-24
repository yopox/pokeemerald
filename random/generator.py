import items
import pokemon as poke

class Generator():

    def __init__(self):
        items.computeWeights()
        self.LEVEL_NB = 1
        self.BALL_PER_LEVEL = 2

    def genBall(self, level, id):
        return "Level_" + str(level) + "_Ball_" + str(id) + "::\n    giveitem_std " + items.getRandomItem() + ", 1, 1\n    end"

    def genBalls(self):
        balls = ""
        for x in range(self.LEVEL_NB):
            for y in range(self.BALL_PER_LEVEL):
                balls += self.genBall(x+1, y+1) + "\n\n"
        return balls