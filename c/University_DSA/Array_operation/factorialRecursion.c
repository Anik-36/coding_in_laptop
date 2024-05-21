#include<stdio.h>
long fact(int m){
    if(m==0 ){
        return 1;
    }else{
        return (m*fact(m-1));
    }
}
int main(){
    int n;
    long f;
    printf("Enter the value of the number : ");
    scanf("%d",&n);
    f = fact(n);
    printf("Factorial of %d is : %d",n,f);
}