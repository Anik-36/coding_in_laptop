#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define f(x) 1 / x
int main() {
    double lower, upper;	
    cout << "Enter the lower and upper bound : ";
    cin >> lower >> upper;
	double interval;	
    cout << "Enter the number of intervals : ";
    cin >> interval;

    double step = (upper - lower) / interval;
    double ans = f(lower) + f(upper);
    ans = ans / 2;

    for (double i = 1; i < interval; i++) {
        double x = lower + i * step;
        ans += f(x);
    }
    cout << "Answer : " << ans * step << endl;
    return 0;
}