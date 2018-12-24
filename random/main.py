import generator

gen = generator.Generator()

random_scripts = open("data/random_scripts.inc", "w")
random_scripts.write(gen.genBalls())
random_scripts.write(gen.genWarps())
random_scripts.close()
