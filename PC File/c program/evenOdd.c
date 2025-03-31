#include<stdio.h>
int isEven(int n);
int main(){
    int a;
    scanf("%d",&a);
    isEven(a);
    return 0;
}
int isEven(int n){

    if(n%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}
