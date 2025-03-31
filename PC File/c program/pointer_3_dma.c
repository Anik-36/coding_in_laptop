#include<stdio.h>
#include<stdlib.h>
int main(){
    int *int_p;
    int_p = (int*)malloc(sizeof(int));
    printf("enter the integer number : ");
    scanf("%d", int_p);
    printf("the integer number you enter is : %d\n",*int_p);
    printf("address : %d\n", &int_p);
    free(int_p);

    float *float_p;
    float_p = (float*)malloc(sizeof(float));
    printf("enter the float number : ");
    scanf("%f", float_p);
    printf("the float number you enter is : %f\n",*float_p);
    printf("address : %d\n", &float_p);
    free(float_p);

    double *double_p;
    double_p = (double*)malloc(sizeof(double));
    printf("enter the double number : ");
    scanf("%lf", double_p);
    printf("the double number you enter is : %lf\n",*double_p);
    printf("address : %d\n", &double_p);
    free(double_p);

    char *char_p;
    char_p = (char*)malloc(sizeof(char));
    printf("enter the char number : ");
    scanf(" %c", char_p);
    printf("the character you enter is : %c\n",*char_p);
    printf("address : %d\n", &char_p);
    free(char_p);

    return 0;
}
