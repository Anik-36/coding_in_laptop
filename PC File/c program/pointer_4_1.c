#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b, sum=0;
    printf("enter the two number : \n");
    scanf("%d%d", &a, &b);
    int *p1 = &a;
    int *p2 = &b;
    int *p_sum = &sum;

    *p_sum = *p1 + *p2;
    printf(" sum of %d and %d is %d \n",*p1,*p2,*p_sum);

    int *p_1 = (int*)malloc(sizeof(int));
    int *p_2 = (int*)malloc(sizeof(int));
    int *pntr_sum = (int*)malloc(sizeof(int));
    p_1 = &a;
    p_2 = &b;
    *pntr_sum = *p_1 + *p_2 ;

    printf("sum of %d and %d is %d ",*p_1,*p_2,*pntr_sum);
    free(pntr_sum);

    return 0;
}
