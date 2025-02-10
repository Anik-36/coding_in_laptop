#include<stdio.h>
int main(){
    int a[5] = {10,20,30,40,50};
    printf("0th index address ->%p\n",&a[0]);
    printf("0th index address ->%p\n",a);
    // it proves that the name of the array - a ->directs the first index's address of the array
    printf("0th index value ->%d\n",a[0]);
    printf("0th index value ->%d\n",*a);
    printf("1th index value ->%d\n",a[1]);
    // so the next index's address will be (a+1) and value is *(a+1)
    printf("1th index value ->%d\n",*(a+1));
    printf("1th index value ->%d\n",*(1+a));
    printf("1th index value ->%d\n",a[1]);
    // 1[a] -> *(1+a)
    // so a[1] = 1[a], it is similar
    printf("1th index value ->%d\n",1[a]);
    return 0;
}