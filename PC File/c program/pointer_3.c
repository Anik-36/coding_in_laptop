#include<stdio.h>
 int main(){
    int int_num;
    int *int_p = &int_num;

    printf("enter the integer number : ");
    scanf("%d", int_p);
    printf("the number is : %d\n",*int_p);
    printf("the address of the pointer is : %d\n",&int_p);

    float float_num;
    float *float_p = &float_num ;

    printf("enter the float number : ");
    scanf("%f", float_p);
    printf("the number is : %f\n",*float_p);
    printf("the address of the pointer is : %d\n",&float_p);

    double double_num;
    double *double_p = &double_num;

    printf("enter the double number : ");
    scanf("%lf", double_p);
    printf("the number is : %lf\n",*double_p);
    printf("the address of the pointer is : %d\n",&double_p);


    char ch;
    char *char_p = &ch;

    printf("enter the character : ");
    scanf(" %c", char_p);
    printf("the number is : %c\n",*char_p);
    printf("the address of the pointer is : %d\n",&char_p);


    return 0;
 }
