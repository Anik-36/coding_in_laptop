/*
Write a C program to insert element in array at specified position. 
Example
Input
Input array elements: 10, 20, 30, 40, 50
Input element to insert: 25
Input position where to insert: 3

Output
Elements of array are: 10, 20, 25, 30, 40, 50
*/
#include<stdio.h>
int main(){
    int a[6];
    int b , c;
    for(int i = 0; i<5; i++){
        scanf("%d",&a[i]);
    }

    printf("\nthe elements are : ");
    for(int i = 0; i<5; i++){
        printf("%d ",a[i]);
    }
    printf("\nenter the element you want to insert : ");
    scanf("%d",&b);
    printf("\nenter the position : ");
    scanf("%d",&c);
    for(int i = 6; i>=0; i--){
        if((i-1)!=c){
            a[i] = a[i-1];
        }else a[i-1] = b; 
    }

    printf("\nthe final array is : ");
    for(int i = 0; i<5; i++){
        printf("%d ",a[i]);
    }

    return 0;
}