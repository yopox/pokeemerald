from pokemon import Type
import random

global POSSIBLE_TYPES, WEIGHT, STARTING_POS, TRAINER_NB, BALL_PER_LEVEL

POSSIBLE_TYPES = [
    [[Type.TYPE_FLYING, 2], [Type.TYPE_GRASS, 1], [Type.TYPE_NORMAL, 5]],
    [[Type.TYPE_GHOST, 4], [Type.TYPE_PSYCHIC, 2], [Type.TYPE_DARK, 1]],
    [[Type.TYPE_GHOST, 1], [Type.TYPE_NORMAL, 3], [Type.TYPE_DARK, 2], [Type.TYPE_GRASS, 3], [Type.TYPE_FLYING, 1]],
    [[Type.TYPE_GHOST, 1], [Type.TYPE_NORMAL, 2], [Type.TYPE_GRASS, 1], [Type.TYPE_FLYING, 1]],
    [[Type.TYPE_ROCK, 6], [Type.TYPE_FLYING, 2], [Type.TYPE_FIGHTING, 1]],
    [[Type.TYPE_ROCK, 1], [Type.TYPE_GROUND, 1], [Type.TYPE_ICE, 5]],
    [[Type.TYPE_ROCK, 1], [Type.TYPE_FIRE, 5]],
    [[Type.TYPE_WATER, 1]],
    [[Type.TYPE_BUG, 4], [Type.TYPE_GRASS, 1]],
]

WEIGHT = [0 for pt in POSSIBLE_TYPES]

STARTING_POS = [
    [10, 17],
    [2, 6],
    [4, 10],
    [51, 15],
    [9, 16],
    [8, 10],
    [9, 11],
    [6, 17],
    [16, 28],
]

BALL_PER_LEVEL = [2, 2, 3, 4, 2, 3, 2, 2, 5]

# TRAINER_NB[level] gives the size of the level trainers' parties
TRAINER_NB = [
    [1],
    [3, 2],
    [1, 4, 2],
    [3, 4, 2, 4],
    [2],
    [3, 2, 3],
    [3],
    [2],
    [5, 1],
]


def getPos(level):
    """Returns the starting position for the given level."""
    return str(STARTING_POS[level-1][0]) + ", " + str(STARTING_POS[level-1][1])


def computeWeights():
    for i in range(len(POSSIBLE_TYPES)):
        for t in POSSIBLE_TYPES[i]:
            WEIGHT[i] += t[1]


def getByWeight(list, w):
    """Returns the item corresponding to the int w where item[1] is its weight."""
    itemId = 0
    partialWeight = list[0][1]
    while partialWeight < w:
        itemId += 1
        partialWeight += list[itemId][1]
    return list[itemId]


def getType(level):
    """Returns a random type for the given level."""
    randomId = random.randint(1, WEIGHT[level])
    return getByWeight(POSSIBLE_TYPES[level], randomId)[0]
