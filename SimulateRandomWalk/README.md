# Stock Price Simulation using Random Walk in C++

This project simulates stock price movements based on a simple **random walk** model. Random walks are often used in financial models to represent the unpredictable nature of stock price movements over time. The program calculates and displays the stock price for a given number of steps (e.g., days), incorporating randomness to simulate volatility

## How It Works

The model is based on the following equation for simulating stock prices:

S(t+1) = S(t) * exp((mu - 0.5 * sigma^2) * dt + sigma * sqrt(dt) * epsilon)


Where:
- **S(t)** is the stock price at time t
- **mu** is the expected return (drift)
- **sigma** is the volatility of the stock
- **dt** is the time increment (in this case, 1 trading day)
- **epsilon** is a random variable generated for each step in the simulation (between -1 and 1)

## Prerequisites

- You need a C++ compiler to compile and run this code (e.g., g++)

