/*

Write a C program to read elements in an array and find the maximum of array elements. 
Also find how many times the maximum occurs.
Example Input
Input elements: 10, 20, 50, 40, 50, 30, 40
Output
Maximum is 50
Maximum occurs 2 times

*/
#include<stdio.h>
int main(){
    int a[7];
    int mx = -10e8;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
        if(a[i]>mx){
            mx = a[i];
        }
    }
    int ct = 0;
    for(int i = 0; i<n; i++){
        if(a[i] == mx){
            ct++;
        }
    }
    printf("%d\n",mx);
    printf("%d",ct);
    return 0;
}