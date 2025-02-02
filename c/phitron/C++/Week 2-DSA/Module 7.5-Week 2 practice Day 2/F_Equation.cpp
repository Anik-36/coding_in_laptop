#include<bits/stdc++.h>
using namespace std;
long long power(long long x, long long n){
    long long pro = x;
    for(int i = 2; i<=n; i++){
        pro = pro*x;
    }
    return pro;
}
long long equation(long long x,long long n,long long sum){
    if(n==0) return 0;
    // cout<<x<<" "<<n<<" "<<" ";
    sum = equation(x,n-2,sum);
    // cout<<sum<<endl;
    // cout<<pow(x,n)<<endl;
    sum= sum + power(x,n);
    // for(int i = 2 ; i<=n; i+=2){
    //     sum = sum + pow(x,i);
    //     cout<<sum<<endl;
    // }
    return sum;
}
int main(){
    long long x,n;
    cin>>x>>n;
    long long sum = 0;
    if(n%2==0){
        sum = equation(x,n,0);
        // for(int i = 2; i<=n; i+=2){
        //     sum+=power(x,i);
        // }
    }else{
        sum = equation(x,n-1,0);
        // for(int i = 2; i<n; i+=2){
        //     sum+=power(x,i);
        // }
    }
    cout<<sum<<endl;
}