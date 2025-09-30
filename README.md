# Stochastic-Modelling-with-Financial-Derivatives

## Project Overview

This project explores **stochastic modeling in finance**, with a focus on **option pricing and simulation-based methods**. The main goal was to understand **stochastic processes, Ito calculus**, and their applications to financial derivatives.  

The work builds progressively from foundational concepts to advanced modeling:

1. **Foundations**
   - Reviewed **combinatorics and probability theory**.
   - Explored financial derivatives: futures, forwards, options

2. **Stochastic Processes**
   - Implemented **Geometric Brownian Motion (GBM)**.
   - Verified theoretical properties through simulations.

3. **Monte Carlo Simulations**
   - Applied Monte Carlo methods to toy problems like **Buffon’s Needle** (estimating π) and financial simulations.
   - Gained intuition on stochastic path behavior and variance.

4. **Black-Scholes Model**
   - Implemented the **analytical formula** for European call and put pricing.
   - Applied **Ito calculus** concepts to model price dynamics:

---

## Final Assignment – Unified Option Pricer

The goal was to **create a unified option pricing interface** that can handle multiple models and pricing techniques:

- **Black-Scholes (Analytical)**
- **Heston Model**
- Analytical pricing using characteristic function and Fourier inversion
- Monte Carlo pricing using Euler-Maruyama discretization

This final module allowed me to:

- Apply stochastic calculus to real option pricing.
- Compare **market prices** with model predictions.
- Build a **flexible Python class `OptionPricer`** to unify all engines.
