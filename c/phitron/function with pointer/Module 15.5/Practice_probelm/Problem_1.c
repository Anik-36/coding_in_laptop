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