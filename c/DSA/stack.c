#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
int push(int stack[max], int *top, int *data);
int pop(int stack[max], int *top, int *data);
int display(int stack[max], int *top, int *data);
void main(){
    int stack[max], data;
    int top, option, n;
    top = -1;
    do{
        printf("Stack Menu");
        printf("\n 1. Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n Select proper option :");
        scanf("%d", &option);
        switch(option){
            case 1:
                printf("\n Enter a value :");
                scanf("%d", &data);
                n = push(stack, &top, &data);
                if(n == -1)
                    printf("\n Stack is full\n");
                else printf("\n Pushed value = %d\n", data);
                break;
            case 2:
                n = pop(stack, &top, &data);
                if(n == -1)
                    printf("Stack is empty \n");
                else printf("\n Popper value is %d\n", data);
                break;
            case 3: 
                n = display (stack, &top, &data);
                break;
            case 4:
                exit(0);
                default: printf("\n Wrong Choice !! Press any key\n");
                getch();
        }
    }
    while(1);
}
int push(int stack[max], int *top, int *data){
    if(*top==max-1)
        return (-1);
    else{
        *top=*top+1;
        stack[*top]= *data;
        return(1);
    }
}
int pop(int stack[max], int *top, int *data){
    if(*top==-1)
        return(-1);
    else{
        *data = stack[*top];
        *top = *top-1;
        return(1);
    }
}
int display(int stack[max], int *top, int *data){
    int i;
    if (*top==-1){
        printf("\n Stack is empty!!Press any key\n");
        getch();
    }
    else{
        printf("\n Stack is...\n");
        for(i=*top; i>=0;--i)
            printf("%d\n", stack[i]);
            printf("\n Press any key\n\n");
        getch();
    }
}