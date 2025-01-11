//Question: Write a C program to take positive integer N as input and print a pattern shown in the sample input output.						Marks: 20
// Constraints: 1 <= N <= 5

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k = 1;
    int s = n-1;
    for(int i = 1; i<=n*2; i++){
        for(int j=1; j<=s; j++){
            printf(" ");
        }
        for(int j=1; j<=k; j++){
            printf("%d",j);
        }
        if(i<n){
            s--;
            k+=2;
        }else{
            s++;
            k-=2;
        }
        printf("\n");
    }
    return 0;
}