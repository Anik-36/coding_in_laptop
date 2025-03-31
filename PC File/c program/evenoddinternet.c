#include<stdio.h>
int isEven(int num){
    return !(num & 1);//1
}
int main(){

    int num;
    printf("enter = ");
    scanf("%d",&num);
    printf("%d",(num&1));//num%2==
    if(isEven(num)){
        printf("even");

    }
    else{
        printf("odd");
    }
    return 0;
}
