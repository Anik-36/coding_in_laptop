#include<stdio.h>
int main(){
    int a = 50;
    int * p = &a;
    printf("a er address -> %p\n",&a);
    printf("a er address -> %p\n",p);
    printf("a er value -> %d\n",a);
    printf("a er value -> %d\n",*p);
    printf("pointer er size -> %d\n",sizeof(p));
    return 0;
}