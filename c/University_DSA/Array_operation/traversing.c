#include<stdio.h>
int main(){
    int a[10];
    printf("Enter the value of an array : ");
    for(int i = 0 ; i<5; i++){
        scanf("%d",&a[i]);
    }
    printf("After traversing the array : ");
    for(int i = 0 ; i<5; i++){
        printf("%d ",a[i]);
    }

    return 0;
}
