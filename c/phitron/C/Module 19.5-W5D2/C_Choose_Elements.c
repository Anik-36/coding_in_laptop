#include<stdio.h>
int main(){
    long long n,k;
    scanf("%lld%lld",&n,&k);
    long long a[n];
    for(int i = 0; i<n; i++){
        scanf("%lld",&a[i]);
    }
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(a[j]>a[i]){
                long long temp = a[j] ;
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    // for(int i = 0; i<n; i++){
    //     printf("%lld ",a[i]);
    // }
    long long sum = 0;
    for(int i = 0; i<k; i++){
        if(a[i]>0) sum+=a[i];
    }
    printf("%lld\n",sum);
    return 0;
}