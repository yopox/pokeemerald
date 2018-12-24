import generator

gen = generator.Generator()

random_scripts = open("random/scripts.inc", "w")
random_scripts.write(gen.genBalls())
random_scripts.write(gen.genWarps())
random_scripts.close()

random_trainers = open("random/trainers.h", "w")
random_trainers.write(gen.genTrainers())
random_trainers.close()

random_encounters = open("random/wild_encounters.h", "w")
random_encounters.write(gen.genEncounters())
random_encounters.close()