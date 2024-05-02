#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n, r , p = 0;
    cin>>n;
    int temp = n;
    while(n!=0){
        r = n%10;
        p = p*10 +r;
        n/=10;
    } 
    cout<<p<<endl;
    if(p==temp) yes
    else no
}