from pokemon import Type

POSSIBLE_TYPES = [
    [Type.TYPE_FLYING, Type.TYPE_GRASS, Type.TYPE_NORMAL],
    [Type.TYPE_GHOST, Type.TYPE_DARK]
]

STARTING_POS = [
    [10, 17],
    [10, 3]
]

def getPos(level):
    return str(STARTING_POS[level-1][0]) + ", " + str(STARTING_POS[level-1][1])