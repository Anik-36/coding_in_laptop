// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     float x[20], y[20][20];
//     int i, j, n;

//     cout << "Enter number of data? " << endl;
//     cin >> n;

//     cout << "Enter data: " << endl;
//     for (i = 0; i < n; i++) {
//         cout << "x[" << i << "] = ";
//         cin >> x[i];
//         cout << "y[" << i << "] = ";
//         cin >> y[i][0];
//     }

//     for (i = 1; i < n; i++) {
//         for (j = 0; j < n - i; j++) {
//             y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
//         }
//     }

//     cout << endl << "FORWARD DIFFERENCE TABLE" << endl;
//     for (i = 0; i < n; i++) {
//         cout << x[i];
//         for (j = 0; j < n - i; j++) {
//             cout << "\t" << y[i][j];
//         }
//         cout << endl;
//     }

//     return 0;
// }






















// #include<bits/stdc++.h>
// using namespace std;
// void code(){
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif 
// }
// #define order 4
// #define MAXN 100
// int main(){
// 	code();
// 	int n;	cin >> n;
// 	float x[MAXN+1],y[MAXN+1];
// 	for(int i=0;i<n;i++) cin >> x[i] >> y[i];

// 	float value;	cin >> value;

// 	float diff[MAXN+1][order+1];
// 	for(int i=0;i<n-1;i++) diff[i][1] = y[i+1]-y[i];

// 	for(int j=2;j<=order;j++){
// 		for(int i=0;i<n-j;i++){
// 			diff[i][j] = diff[i+1][j-1]-diff[i][j-1];
// 		}
// 	}
// 	int idx = 0;
// 	while(x[idx]<value) idx++;
// 	idx--;

// 	float h = x[1]-x[0];
// 	float u = (value-x[idx])/h;

// 	float y_value = y[idx];

// 	float fact_u = 1.0,multi = 1.0;
// 	for(int i=1;i<=order;i++){
// 		fact_u *= u-i+1;
// 		multi *= i;
// 		y_value += (fact_u/multi)*diff[idx][i];
// 	}
// 	cout << y_value << endl;
// }


















#include <iostream>
#include <vector>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
        
double newtonForwardInterpolation(double x, vector<double>& X, vector<double>& Y, int n) {
    
    vector<vector<double>> forwardDifference(n, vector<double>(n, 0));
    for (int i = 0; i < n; ++i)
        forwardDifference[i][0] = Y[i];
    for (int i = 1; i < n; ++i) {
        
        for (int j = 0; j < n - i; ++j)
            forwardDifference[j][i] = forwardDifference[j + 1][i - 1] - forwardDifference[j][i - 1];
    }
    
    double h = X[1] - X[0];
    double u = (x - X[0]) / h;
    double result = forwardDifference[0][0];
    double term = 1;
    for (int i = 1; i < n; ++i) {
        term *= (u - i + 1) / i;
        result += term * forwardDifference[0][i] / factorial(i);
    }
    return result;
}
int main() {
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;
    
    vector<double> X(n), Y(n);
    cout << "Enter the data points (X values):\n ";
    for (int i = 0; i < n; ++i)
        cin >> X[i];
    cout << "Enter the corresponding function values (Y values):\n ";
    for (int i = 0; i < n; ++i)
        cin >> Y[i];
    double x;
    cout << "Enter the value of x for interpolation: ";
    cin >> x;
    // Perform interpolation
    double interpolatedValue = newtonForwardInterpolation(x, X, Y, n);
    cout << "Interpolated value at x = " << x << ": " << interpolatedValue << endl;
    return 0;
}



















