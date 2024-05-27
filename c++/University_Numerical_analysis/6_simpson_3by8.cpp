#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define f(x) 1 / (1 + x)
int main() {
    double lower, upper;	
    cout << "Enter the lower and upper bound : ";
    cin >> lower >> upper;
	double interval;	
    cout << "Enter the number of intervals : ";
    cin >> interval;

    double step = (upper - lower) / interval;
    double ans = f(lower) + f(upper);
    ans = ans;

    for (double i = 1; i < interval; i++) {
        double x = lower + i * step;
        if ((int)i % 3 != 0)
            ans += 3 * f(x);
        else
            ans += 2 * f(x);
    }
    cout << ans * step * 3 / 8 << endl;
}