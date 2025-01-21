#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long s,a,b,c;
        scanf("%lld%lld%lld%lld",&s,&a,&b,&c);
        long long ans = s-a-b-c;
        printf("%lld\n",ans);
    }
    return 0;
}