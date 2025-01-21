//Question: Take a positive integer N as input and print the pattern shown in the sample input output.
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s = n-1;
    int k = 1;
    for(int i = 1 ; i<=n; i++){
        for(int j = 1; j<=s; j++){
            printf(" ");
        }
        for(int j = 1; j<=k; j++){
            printf("*");
        }
        k++;
        s--;
        printf("\n");
    }
    return 0;
}