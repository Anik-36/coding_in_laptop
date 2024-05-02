#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int sum(int n){
    int sum = 0;
    while(n!=0){
        int d =n%10;
        sum+=d;
        n/=10;
    }
    return sum;
}
int main(){
    int a,b ;
    cin>>a>>b;
    cout<<sum(a)+sum(b);
}
