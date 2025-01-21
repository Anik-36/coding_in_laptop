#include<stdio.h>
int main(){
    int x  = 10;
    printf("%d\n",x);
    // refference
    int * p = &x;
    printf("%p\n",p);
    // derefferenc
    printf("%d\n",*p);

    *p = 500;
    printf("%d\n",x);
    return 0;
}