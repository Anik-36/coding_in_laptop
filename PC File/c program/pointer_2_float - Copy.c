/*Declare the Pointer. [Declare necessary variable or dynamic memory allocation]
Assign constant value using the pointer.
Print variable value and address using the variable name. [Not possible in DMA]
Print variable value and address using the pointer.
Print the address of the pointer.
For integer number
*/
#include<stdio.h>
int main(){
    float a = 5.55 ;
    float *p = &a ;
    printf("variable value : %f\n ",a);
    printf("variable address : %f\n ",&a);
    printf("variable value using the pointer : %f\n ",*p);
    printf("variable address the pointer : %f\n ",p);
    printf("address of the pointer: %f\n ",&p);

    return 0;
}
