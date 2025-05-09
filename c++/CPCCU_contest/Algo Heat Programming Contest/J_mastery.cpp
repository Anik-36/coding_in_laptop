#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int d = abs(a-b);
        int ans = 0;
        while(d/5>0){
            int v = d/5;
            ans+=v;
            d = d%5;
        }
        while(d/2>0){
            int v = d/2;
            ans+=v;
            d = d%2;
        }
        if(d>0) ans++;
        cout<<ans<<endl;
    }
}