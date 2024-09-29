#include <iostream>
#include <cmath>  
#include <cstdlib> 
#include <ctime>  

using namespace std;

// Function to generate random numbers in the range [-1, 1]
double getRandomStep() {
    return (rand() / (double)RAND_MAX) * 2 - 1;
}

void simulateRandomWalk(double S0, double mu, double sigma, int steps, double dt) {
    double price = S0;
    cout << "Initial Stock Price: " << price << endl;

    for (int i = 0; i < steps; ++i) {
        // Random walk equation: S(t+1) = S(t) * exp((mu - 0.5 * sigma^2) * dt + sigma * sqrt(dt) * epsilon)
        double epsilon = getRandomStep(); 
        price *= exp((mu - 0.5 * sigma * sigma) * dt + sigma * sqrt(dt) * epsilon);
        cout << "Price at step " << i + 1 << ": " << price << endl;
    }
}

int main() {
    srand(time(0)); 

    // Initial stock price (S0), drift (mu), volatility (sigma), steps, and time interval (dt)
    double S0 = 100.0; 
    double mu = 0.05;  
    double sigma = 0.2; 
    int steps = 100;   
    double dt = 1.0 / 252; 

    simulateRandomWalk(S0, mu, sigma, steps, dt);

    return 0;
}
