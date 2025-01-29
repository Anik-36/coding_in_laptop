#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
ll equation(int x,int n,ll sum){
    if(n==0) return 0;
    // cout<<x<<" "<<n<<" "<<" ";
    sum = equation(x,n-2,sum);
    // cout<<sum<<endl;
    cout<<pow(x,n)<<endl;
    sum= sum + pow(x,n);
    return sum;
}
int main(){
    ll x,n;
    cin>>x>>n;
    ll sum = 0;
    if(n%2==0){
        sum = equation(x,n,sum);
    }else{
        sum = equation(x,n-1,sum);
    }
    // cout<<sum<<endl;
}