/*Declare different types of pointer.
    Wild Pointer
    NULL Pointer
    Void Pointer
    Dangling Pointer [Only for DMA]*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p; //wild pointer
    int *q = NULL ; // null pointer
    void *r = NULL; // void pointer
    int *ptr = (int*)malloc(sizeof (int));
    *ptr = 5 ;
    free(ptr);
    printf("%d\n",*ptr); // dangling pointer
    return 0;
}
