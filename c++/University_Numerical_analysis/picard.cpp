#include<bits/stdc++.h>
using namespace std;
// Function to define the differential equation dy/dx = f(x, y)
double f(double x, double y) {
    return x + pow(y, 2); // dy/dx = x + y^2
}
// Function to calculate the next iteration of Picard's method
double picard(double x0, double y0, double x, int iterations) {
    double y = y0; // Initial value of y
    for (int n = 0; n < iterations; ++n) {
        double integral = 0.0;
        double step = 0.001; // Step size for numerical integration
        for (double t = x0; t <= x; t += step) {
            integral += f(t, y) * step;
        }
        y = y0 + integral;
        cout << "Iteration " << n + 1 << ": y(" << x << ") = " << y << endl;
    }
    return y;
}
int main() {
    double x0, y0, x;
    int iterations;
    cout << "Enter the initial value of x (x0): ";
    cin >> x0;
    cout << "Enter the initial value of y (y0): ";
    cin >> y0;
    cout << "Enter the value of x at which to find the solution: ";
    cin >> x;
    cout << "Enter the number of iterations: ";
    cin >> iterations;
    double result = picard(x0, y0, x, iterations);
    cout << "Approximate solution at x = " << x << " is y = " << result << endl;
    return 0;
}
