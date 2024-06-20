/*
Write a C program to find the second largest element in an array. 
Example
Input
Input array elements: -7 2 3 8 6 6 75 38 3 2
Output
Second largest = 38
*/
#include<stdio.h>
#include<limits.h>
int main(){
    int a[10] ;
    int mx1 = INT_MIN ,mx2 = INT_MIN;
    for(int i = 0; i<10 ; i++){
        scanf("%d",&a[i]);
        if(a[i]>mx1){
            mx2 = mx1;
            mx1 = a[i];
        }else if(a[i]>mx2 && a[i]<mx1){
            mx2 = a[i];
        }
    }
    printf("%d",mx2);
    return 0;
}