#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int powerlog(int a, int b){
    if(b == 0) return 1;
    int x = powerlog(a,b/2);
    if(b%2==0){
        return x*x;
    }else return x*x*a;
}
int main(){
    int a, b ;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<a<<" raised to the power "<<b<<" is "<< powerlog(a,b);
}