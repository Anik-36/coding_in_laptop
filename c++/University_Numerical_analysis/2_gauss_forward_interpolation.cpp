#include<bits/stdc++.h>
#define ll long long
using namespace std;

double p_cal(double p, int n) {
    double temp = p;
    for (int i = 1; i < n; ++i) {
        if (i % 2 == 1) {
            temp *= (p - i);
        } else {
            temp *= (p + i);
        }
    }
    return temp;
}


int fact(int n) {
    int f = 1;
    for (int i = 2; i <= n; ++i) {
        f *= i;
    }
    return f;
}

int main() {
    int n = 5;
    vector<double> x = {21, 25, 29, 33, 37};
    vector<vector<double>> y(n, vector<double>(n, 0));

    y[0][0] = 18.4708;
    y[1][0] = 17.8144;
    y[2][0] = 17.1070;
    y[3][0] = 16.3432;
    y[4][0] = 15.5154;


    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            y[j][i] = round((y[j + 1][i - 1] - y[j][i - 1]) * 10000.0) / 10000.0;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << x[i] << "\t";
        for (int j = 0; j < n - i; ++j) {
            cout << fixed << setprecision(4) << y[i][j] << "\t";
        }
        cout << endl;
    }


    double value = 30;


    double sum = y[n / 2][0];
    double p = (value - x[n / 2]) / (x[1] - x[0]);

    for (int i = 1; i < n; ++i) {
        sum += (p_cal(p, i) * y[(n - i) / 2][i]) / fact(i);
    }

    cout << "\nValue at " << value << " is " << fixed << setprecision(4) << sum << endl;

    return 0;
}
