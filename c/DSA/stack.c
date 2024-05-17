#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5

int push(int stack[max],int *top, int *data);

void main(){

int stack[max], data;
int top, option, n;
top =-1;

do{
    printf("***Stack Menu***");
    printf("\n 1. push");
    printf("\n 2. pop");
    printf("\n 3. Display");
    printf("\n 4. Exit");
    printf("\n Select proper option: ");
    scanf("%d", &option);

    switch(option){
case 1:
    printf("\n Enter a value:");
    scanf("%d", &data);
    n = push(stack, &top, &data);
    if( n==max){
        printf("\nStack is full!!!");
    }else{
    printf("\nPushed value= %d\n", data);
    }
    break;

    case 2:
    n = pop(stack, &top, &data);
    if( n== -1){
        printf("\nStack is empty!!!");
    }else{
    printf("\nPoped value= %d\n", data);
    }
    break;

     case 3:
    n = display(stack, &top, &data);
    break;

     case 4:
        exit(0);

        default: printf("\nWrong Choice!!!! chose between 1 to 4.");


    }
}while(1);

}


int push(int stack[max],int *top, int *data){

if(*top == max - 1){
    return(-1);
}
else{
    *top = *top + 1;
    stack[*top] = *data;
    return (1);
}
}


int pop(int stack[max],int *top, int *data){
if(*top == -1){
    return(-1);
}
else{
    *data = stack[*top];
    *top = *top - 1;
    return(1);
}
}


int display(int stack[max], int *top, int *data){

int i;
if(*top == -1){
    printf("\nStack if empty!!!");

}
else{
    printf("\nStack is: ");
    for(i = *top; i>=0; --i){
        printf("%d", stack[i]);

    }
    printf("\nPress any key....");


}


}
