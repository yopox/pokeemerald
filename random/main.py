import generator

gen = generator.Generator()

random_balls = open("../data/random_balls.inc", "w")
random_balls.write(gen.genBalls())
random_balls.close()