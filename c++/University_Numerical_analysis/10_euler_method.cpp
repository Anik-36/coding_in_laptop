#include <bits/stdc++.h>
using namespace std;
double f(double x, double y) {
    return x + y; // Example: dy/dx = x + y
}
void euler(double x0, double y0, double x, double h) {
    double n = (x - x0) / h; // Number of steps
    double y = y0;
    cout << "x0: " << x0 << ", y0: " << y0 << endl;
    for (int i = 0; i < n; ++i) {
        y = y + h * f(x0, y); // Euler formula
        x0 = x0 + h;
        cout << "x" << i+1 << ": " << x0 << ", y" << i+1 << ": " << y << endl;
    }
    cout << "Approximate solution at x = " << x << " is y = " << y << endl;
}
int main() {
    double x0, y0, x, h;
    cout << "Enter the initial value of x (x0): ";
    cin >> x0;
    cout << "Enter the initial value of y (y0): ";
    cin >> y0;
    cout << "Enter the value of x at which to find the solution: ";
    cin >> x;
    cout << "Enter the step size (h): ";
    cin >> h;
    euler(x0, y0, x, h);
    return 0;
}
