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
        int n,a,b,v,p1,p2;
        cin>>n>>a>>b;
        if(n%2==0){
            v= n/2;
            p1 = v*b;
            p2 = n*a;
            if(p1<=p2) cout<<p1<<endl;
            else cout<<p2<<endl;
        }else{
            v=n/2;
            p1 = (v*b)+a;
            p2 = a*n;
            if(p1<=p2) cout<<p1<<endl;
            else cout<<p2<<endl;
        }
    }
}   