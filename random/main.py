import generator
import random
import re

random.seed()

gen = generator.Generator()

# Flags

old_file = ""
with open("include/constants/flags.h", "r") as starter_choose:
    old_file = starter_choose.read()

with open("include/constants/flags.h", "w") as starter_choose:
    starter_choose.write(re.sub(r"\/\/ RANDOMIZER FLAGS\n([#a-zA-Z _0-9]+\n)*", gen.genFlags(), old_file))

# Balls and warps

random_scripts = open("random/scripts.inc", "w")
random_scripts.write(gen.genBalls())
random_scripts.write(gen.genWarps())
random_scripts.close()

# Trainers

old_file = ""
with open("include/constants/opponents.h", "r") as opponents:
    old_file = opponents.read()

with open("include/constants/opponents.h", "w") as opponents:
    opponents.write(re.sub(r"\/\/ RANDOMIZER OPPONENTS\n([#a-zA-Z _0-9]*\n)*", gen.genOpponents(), old_file))

with open("random/trainers.h", "w") as random_trainers:
    random_trainers.write(gen.genTrainers())

# Wild encounters

old_file = ""
with open("src/data/wild_encounters.h", "r") as we:
    old_file = we.read()

with open("src/data/wild_encounters.h", "w") as we:
    we.write(re.sub(r"\/\/ RANDOMIZER WILD ENCOUNTERS\n([^;]*);", gen.genWE(), old_file))

with open("random/wild_encounters.h", "w") as random_encounters:
    random_encounters.write(gen.genEncounters())

# Starters

old_file = ""
with open("src/starter_choose.c", "r") as starter_choose:
    old_file = starter_choose.read()

with open("src/starter_choose.c", "w") as starter_choose:
    starter_choose.write(re.sub(r"((SPECIES_[A-Z, \n_0-9]*))", gen.genStarters(), old_file))