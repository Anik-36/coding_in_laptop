#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s = n-1;
    int k = 1;
    for(int i = 1; i<=2*n; i++){
        if(i==n || i==n+1){
            s=0;
        }
        for(int j = 1; j<=s; j++){
            printf(" ");
            if(i==n || i==n+1){
                s=0;
                s++;
            }
        }
        if(i==n || i==n+1){
            k= (n*2)-1;
        }
        for(int j = 1; j<=k; j++){
            printf("*");
            if(i==n || i==n+1){
                k= (n*2)-1;
                k-=2;
            }
        }
        if(i<n){
            s--;
            k+=2;
        }
        if(i>n+1){
            s++;
            k-=2;
        }
        printf("\n");
    }
    return 0;
}