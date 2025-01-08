#include<stdio.h>
int main(){
    int a = 50;
    // the datatype of the pointer always should be the variable datatype. because pointer has no datatype
    int * p = &a;
    // dereferencing
    *p = 200;
    int **p2 = &p; // double referencing
    // printing a's address
    printf("a er address -> %p\n",&a);
    printf("a er address -> %p\n",p);
    // printing a's value
    printf("a er value -> %d\n",a);
    printf("a er value -> %d\n",*p);
    //printing p's address
    printf("p er address -> %p\n",&p);
    printf("p er address -> %p\n",p2);
    // printing p's value
    printf("a er value -> %d\n",**p2);
    printf("a er address -> %p\n",*p2);
    int *** p3 = &p2; // triple refferencing
    printf("a er value -> %d\n",***p3);
    printf("p er address -> %p\n",*p3);
    printf("p2 er address -> %p\n",p3);
    printf("p2 er address -> %p\n",&p2);

    printf("pointer er size -> %d\n",sizeof(p));
    return 0;
}