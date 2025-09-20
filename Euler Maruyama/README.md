# **Euler-Maruyama Method**

This assignment implements the pricing of different Options using Euler-Maruyama method in conjuction with Monte Carlo framework.

The simulations are done based on Geometric Brownian Motion (GBM) which has the SDE:
$$ dS_t = rS_tdt + \sigma S_tdW_t $$ 

The following options have been priced:

---
### European Call Option:
$$
\text{Option Price} = e^{-rT} \cdot \frac{1}{M} \sum_{i=1}^{M} \max(S_T^{(i)} - K, 0)
$$ 
where $\text{M}$ is the number of simulations, $S_T$ is the underlying asset price at maturity and $\text{K}$ is the strike price.

### Arithmetic Asian Call Option:
$$
  \text{Option Price} = e^{-rT} \cdot \frac{1}{M} \sum_{i=1}^{M} \max\left( \frac{1}{n} \sum_{j=1}^{n} S_t^{(i,j)} - K, 0 \right)
  $$
where $\text{M}$ is the number of simulations , $\text{n}$ is the number of steps in each simulation and $S_t^{(i,j)}$ is the price after $\text{j}$ steps in the $\text{i} th$ simulation.

### Geometric Asian Call Option:
$$
\text{Option Price} = e^{-rT} \cdot \frac{1}{M} \sum_{i=1}^{M} \max\left( \left( \prod_{j=1}^{n} S_t^{(i,j)} \right)^{1/n} - K,\ 0 \right)$$
where $\text{M}$ is the number of simulations , $\text{n}$ is the number of steps in each simulation and $S_t^{(i,j)}$ is the price after $\text{j}$ steps in the $\text{i} th$ simulation.

### Floating Lookback Option:
$$
\text{Option Price} = e^{-rT} \cdot \frac{1}{M} \sum_{i=1}^{M} \max\left( S_T^{(i)} - \min_{j=1}^{n} S_t^{(i,j)},\ 0 \right)
$$
where $\text{M}$ is the number of simulations , $\text{n}$ is the number of steps in each simulation and $S_t^{(i,j)}$ is the price after $\text{j}$ steps in the $\text{i} th$ simulation.

---




