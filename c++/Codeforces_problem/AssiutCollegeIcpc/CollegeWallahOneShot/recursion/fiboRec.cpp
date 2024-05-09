#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int fibo(int n){
    if(n == 1 || n ==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<fibo(n);
}