#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;

int main(){
    int a = 2, b = 3;
    int* x;
    int* y;
    cout<<a<<endl<<b<<endl;
    x = &a;
    y = &b;
    *x = 22;
    cout<<a<<endl;
    *y = 24;
    cout<<b<<endl; 
}