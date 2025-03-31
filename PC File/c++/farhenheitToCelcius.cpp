#include <bits/stdc++.h>
using namespace std;
 double fahrenheitToCelsius(double fahrenheit){
     double celsius;
     celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
     return celsius;
 }
 int main(){
    double fahrenheit;
    cout << "Enter temperature in fahrenheit : ";
    cin  >> fahrenheit;
    cout << "Temperature in Celsius = "<< fahrenheitToCelsius(fahrenheit) <<endl;
 }
