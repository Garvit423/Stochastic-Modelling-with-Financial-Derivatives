import numpy as np

simulations = 1000
steps = 3600

p_up = 0.1
p_same = 0.85
p_down = 0.05

moves = [0.01,0.00,-0.01]
probs = [p_up,p_same,p_down]

initial_price = 120.00
target = 130.00
strike_price = 125.00

counts = 0

for sim in range(simulations):
    price = initial_price
    for i in range(steps):
        move = np.random.choice(moves,p = probs)
        price += move
        if(price >= target):
            counts += 1
            break

print(counts/simulations)
