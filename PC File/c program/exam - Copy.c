/* create a function , pass a float array and find the average
create a function to update the value  of the array */
#include<stdio.h>
int main(){
    int a, b;
    int *p_1= (int*)malloc(sizeof(int));
    int *p_2= (int*)malloc(sizeof(int));
    int *p_sum = (int*)malloc(sizeof(int));
    p_1 = &a;
    p_2 = &b;
    scanf("%d%d",p_1,p_2);
    *p_sum = *p_1 + *p_2 ;
    printf("Sum of %d and %d is %d \n",*p_1,*p_2,*p_sum);
    free(p_sum);

    return 0;
}
