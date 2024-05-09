#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int sum(int n){
    if(n==1){
        return 1;
    } 
    return n + sum(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<sum(n)<<endl;
}