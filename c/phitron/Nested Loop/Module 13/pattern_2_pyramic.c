#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s = n - 1;
    int k = 1;
    for(int i = 0 ; i<n; i++){
        for(int j =1; j<=s; j++){
            printf(" ");
        }
        for(int j =1; j<=k; j++){
            printf("*");
        }
        printf("\n");
        k+=2;
        s--;
    }
    return 0;
}