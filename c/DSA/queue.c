#include<stdio.h>
#define SIZE 100
void enqueue();
void dequeue();
void show();
int inp_arr[SIZE];
int Rear = -1;
int Front = -1;
main(){
    int i , ch;
    while(1){
        printf("1.Enqueue operation \n");
        printf("2.Dequeue operation \n");
        printf("3.Display the queue \n");
        printf("4.Exit \n");
        printf("Enter the choice of operations : \n");
        scanf("%d",&ch);
        switch(ch){
            case 1 :
            enqueue();
            break;
            case 2 :
            dequeue();
            break;
            case 3 :
            show();
            break;
            case 4 :
            exit(1);
            default:
            printf("Incorrect choice \n");

        }

    }
}

void enqueue(){
    int insert_item;
    if(Rear == SIZE - 1){
        printf("Overflow \n");
    }else{
        if(Front == -1)
        Front = 0;
        printf("Element to be inserted in the Queue \n : ");
        scanf("%d", &insert_item);
        Rear = Rear +1;
        inp_arr[Rear] = insert_item;
    }
}