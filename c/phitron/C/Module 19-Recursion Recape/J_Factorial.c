#include<stdio.h>
long long factorial(long long n){
    if(n==0) return 1;
    long long ans = factorial(n-1);
    return ans*n;
}
int main(){
    long long int n;
    scanf("%lld",&n);
    long long int ans = factorial(n);
    printf("%lld\n",ans);
    return 0;
}