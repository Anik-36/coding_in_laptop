#include<stdio.h>
int main(){
    int x  = 10;
    printf("%d\n",x);
    int * p = &x;
    printf("%p\n",p);
    return 0;
}