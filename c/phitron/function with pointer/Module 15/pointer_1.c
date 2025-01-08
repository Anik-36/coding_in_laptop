#include<stdio.h>
int main(){
    int a = 50;
    // the datatype of the pointer always should be the variable datatype. because pointer has no datatype
    int * p = &a;
    // derefferencing
    *p = 200;
    printf("a er address -> %p\n",&a);
    printf("a er address -> %p\n",p);
    printf("a er value -> %d\n",a);
    printf("a er value -> %d\n",*p);
    printf("pointer er size -> %d\n",sizeof(p));
    return 0;
}