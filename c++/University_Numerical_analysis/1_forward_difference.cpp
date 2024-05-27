#include <bits/stdc++.h>
using namespace std;
int main() {
    float x[20], y[20][20];
    int i, j, n;

    cout << "Enter number of data? " << endl;
    cin >> n;

    cout << "Enter data: " << endl;
    for (i = 0; i < n; i++) {
        cout << "x[" << i << "] = ";
        cin >> x[i];
        cout << "y[" << i << "] = ";
        cin >> y[i][0];
    }

    for (i = 1; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
        }
    }

    cout << endl << "FORWARD DIFFERENCE TABLE" << endl;
    for (i = 0; i < n; i++) {
        cout << x[i];
        for (j = 0; j < n - i; j++) {
            cout << "\t" << y[i][j];
        }
        cout << endl;
    }

    return 0;
}