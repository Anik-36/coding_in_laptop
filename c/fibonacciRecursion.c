#include<stdio.h>
int fibo(int m){
    if(m==0){
        return 0;
    }else if(m==1){
        return 1;
    }else{
        return fibo(m-1) + fibo(m-2);
    }
}
int main(){
    int n;
    printf("Enter the value you want to see :");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("%d, ",fibo(i));
    }
    return 0;
}