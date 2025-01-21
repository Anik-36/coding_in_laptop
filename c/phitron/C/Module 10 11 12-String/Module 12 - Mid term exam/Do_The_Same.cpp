#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int j = 1; j<=k ; j++){
        for(int i = 1; i<=n; i++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}