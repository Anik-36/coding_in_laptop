// #include<bits/stdc++.h>
// #define endl '\n'
// #define ll long long 
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// using namespace std;
// int fibo(int a){
//     if(a==0) return 0;
//     if(a==1) return 1;
//     else return fibo(a-1) + fibo(a-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fibo(n-1)<<endl;
// }













#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const ll N = 1e5 + 5;
ll save[N];
ll fibo(ll n){
    if(n == 1 or n == 2) return n-1;
    // Memoization
    if(save[n] != -1){
        return save[n];
    }
    ll ans1 = fibo(n - 1);
    ll ans2 = fibo(n - 2);
    save[n] = ans1 + ans2;
    return save[n];
}
int main(){
    Faster
    ll n;
    cin>>n;
    for(ll i = 0; i <= n; i++){
        save[i] = -1;
    }
    ll ans = fibo(n); // Time complexity O(n)
    cout<<ans<<endl;
    return 0;
}