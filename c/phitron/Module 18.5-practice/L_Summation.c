#include<stdio.h>
long long summation(long long * a,int n){
    if(n==0) return a[0];
    return a[n]+summation(a,n-1);

}
int main(){
    int n;
    scanf("%d",&n);
    long long a[n];
    for(int i = 0; i<n; i++){
        scanf("%lld",&a[i]);
    }
    long long sum = summation(a,n-1);
    printf("%lld\n",sum);
    return 0;
}