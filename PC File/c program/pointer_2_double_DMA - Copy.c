/*Declare the Pointer. [Declare necessary variable or dynamic memory allocation]
Assign constant value using the pointer.
Print variable value and address using the variable name. [Not possible in DMA]
Print variable value and address using the pointer.
Print the address of the pointer.
For integer number in DMA
*/
#include<stdio.h>
int main(){
    double a = 5.36 ;
    double *p = (double*)malloc(sizeof(double));
    *p = a ;
    printf("variable value : %lf\n ",a);
    printf("variable address : %d\n ",&a);
    printf("variable value using the pointer : %lf\n ",*p);
    printf("variable address using the pointer : %d\n ",p);
    printf("address of the pointer: %d\n ",&p);
    free(p);

    return 0;
}


