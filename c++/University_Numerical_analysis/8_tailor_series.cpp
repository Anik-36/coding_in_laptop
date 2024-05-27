#include <bits/stdc++.h>
using namespace std;
double f(double x) {
  return exp(x);
}

double f_derivative(double x, int n) {
  if (n == 0) {
    return f(x);
  } else {
    return f_derivative(x, n - 1); 
  }
}

double taylorSeries(double x0, double x, int order) {
  double sum = f(x0);
  double term;
  double factorial = 1.0;

  for (int i = 1; i <= order; i++) {
    factorial *= i;
    term = f_derivative(x0, i) * pow(x - x0, i) / factorial;
    sum += term;
  }

  return sum;
}

int main() {
  double x0 = 1.0; 
  double x = 1.5; 
  int order = 2;  

  double approx = taylorSeries(x0, x, order);

  cout << "Approximate value of f(" << x << ") using Taylor series of order ";
  cout<< order << " around x0=" << x0 << " is: " << approx << endl;

  return 0;
}