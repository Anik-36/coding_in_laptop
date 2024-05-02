#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a!=b && a!=c ) cout<<a<<endl;
        else if(b!=a && b!=c ) cout<<b<<endl;
        else if(c!=a && c!=b ) cout<<c<<endl;
    }
}