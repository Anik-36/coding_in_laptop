// Question: Write a function named count_before_zero() which receives an array of integers and the size of that array and counts the number of elements in that array until you find zero and returns that count. Call that function in the main function and print the count there.

#include<stdio.h>
int count_before_zero(int * a, int n){
    int count = 0;
    for(int i = 0 ; i<n; i++){
        if(a[i]==0){
            break;
        }
        count++;
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i= 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int zero = count_before_zero(a,n);
    printf("%d\n",zero);
    return 0;
}