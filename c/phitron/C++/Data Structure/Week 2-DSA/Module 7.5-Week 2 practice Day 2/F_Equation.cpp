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
    sum = equation(x,n-2,sum);
    sum= sum + power(x,n);
    return sum;
}
int main(){
    long long x,n;
    cin>>x>>n;
    long long sum = 0;
    if(n%2==0){
        sum = equation(x,n,0);
    }else{
        sum = equation(x,n-1,0);
    }
    cout<<sum<<endl;
}