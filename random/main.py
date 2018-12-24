import generator
import random
import re

random.seed()

gen = generator.Generator()

# Balls and warps

random_scripts = open("random/scripts.inc", "w")
random_scripts.write(gen.genBalls())
random_scripts.write(gen.genWarps())
random_scripts.close()

# Trainers

with open("random/trainers.h", "w") as random_trainers:
    random_trainers.write(gen.genTrainers())

# Wild encounters

with open("random/wild_encounters.h", "w") as random_encounters:
    random_encounters.write(gen.genEncounters())

# Starters

old_file = ""
with open("src/starter_choose.c", "r") as starter_choose:
    old_file = starter_choose.read()

with open("src/starter_choose.c", "w") as starter_choose:
    starter_choose.write(re.sub(r"((SPECIES_[A-Z, \n_0-9]*))", gen.getStarters(), old_file))