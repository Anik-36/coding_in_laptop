//Question: Write a function named my_abs() that receives an integer value as parameter and returns the absolute value of that. Absolute value means if the value is negative it will be converted to positive value. Then print the value in the main function.
#include<stdio.h>
#include<stdlib.h>
int my_abs(int a){
    return abs(a);
}
int main(){
    int a;
    scanf("%d",&a);
    int b = my_abs(a);
    printf("%d\n",b);
    return 0;
}