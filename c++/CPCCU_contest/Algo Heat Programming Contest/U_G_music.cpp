/*https://vjudge.net/contest/715468#problem/G
*/
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
ll fact(ll n){
    ll f = 1;
    for(int i = 1; i<=n; i++){
        f*=i;
    }
    return f;
}
int main(){
    ll a,b;
    cin>>a>>b;
    ll c  = fact(a);
    ll d = fact(b);
    cout<<__gcd(c,d)<<endl;
}