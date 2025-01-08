#include<stdio.h>
void fun(int x){
    x = 100;
    printf("fun a x er address ->%p\n",&x);
}
int main(){
    int x;
    x = 10;
    printf("main a x er address ->%p\n",&x);
    fun(x);
    printf("%d\n",x);
    return 0;
}