# Option Pricing

## This assignment covers Options Pricing by various methods:

- Using Black-Scholes-Merton equation: calculating the implied volatility using the trading price of a european call option and then using it to price a european put option.

- Using Discrete Binomial Model: Assuming that the changes in the asset's price are either $1$ or $-1$ both events being equally likely and then pricing the option using the expected payoff.

-  Using Normal Distribution Model: Assuming that the daily price moves are normally distributed and then pricing the option using the expected payoff: 
$$
\mathbb{E}[\max(S_T - K ,0)] = \int_{K}^{\infty} (S - K) f_{S_T}(S) \, dS
$$

- Using Conitnuous Distribution Model: Assuming daily price moves are uniformly distributed in the support interval and then running a Monte Carlo simulation to price the option. 

---
## Buffon's Needle

- $\pi$ is estimated by calculating the probability that a needle randomly dropped on a lined plane (each separated by distance d) intersects a line.

- This probability is calculated using Monte Carlo simulation assuming that the angle $\theta$ between the needle and the line is uniformly distributed between $[0, \pi/2]$ and the distance 
from the needle's center to the line $x$ is uniformly distributed in the interval $[0,d/2]$

- $\pi \approx 2l/dP$ where $P$ is the probability of intersecting a line.