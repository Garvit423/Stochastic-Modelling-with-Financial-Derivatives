# Final Project: Option Pricing Models

In this project, I have implemented different option pricing models under the class **`OptionPricer`**, including:

- **Black-Scholes Model**
- **Heston Model**

---

## 1. Black-Scholes Model

Options are priced using the closed-form solution derived from the Black-Scholes model SDE:

where:

- `S_t` = asset price at time t  
- `r` = risk-free interest rate  
- `sigma` = constant volatility  
- `dW_t` = Brownian motion increment  

The model provides a **closed-form solution for European call and put options**.

---

## 2. Heston Model

The Heston model incorporates **stochastic volatility**. Options are priced using:

1. **Analytical formula** (semi-closed form via characteristic function)  
2. **Monte Carlo simulation** (Euler-Maruyama discretization of the SDEs)

Heston SDEs:

where:

- `S_t` = asset price  
- `v_t` = stochastic variance  
- `kappa` = mean-reversion rate of variance  
- `theta` = long-term variance  
- `sigma` = volatility of variance ("vol of vol")  
- `rho` = correlation between asset and variance processes  

---

This implementation allows comparing **market option prices** with those predicted by:

- **Black-Scholes**  
- **Heston Analytical**  
- **Heston Monte Carlo**

All models are accessible via the **`OptionPricer`** class, providing a **unified interface** for pricing options with different engines.