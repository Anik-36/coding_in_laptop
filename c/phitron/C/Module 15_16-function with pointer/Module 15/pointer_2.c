#include<stdio.h>
int main(){
    double a = 4.59;
    double * p = &a;
    printf("a er address -> %p\n",&a);
    printf("a er address -> %p\n",p);
    printf("a er value -> %.2lf\n",a);
    printf("a er value -> %.2lf\n",*p);
    printf("pointer er size -> %d\n",sizeof(p));
    return 0;
}