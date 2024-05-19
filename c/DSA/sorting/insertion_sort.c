#include<stdio.h>
void insertion_sort(int a[], int n){
    for(int i = 0 ; i <n ; i++){
        int j = i;
        while(j>0 && a[j-1]>a[j]){
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
             j--;
        }
    }
}
int main(){
    int n;
    printf("Enter the number of the element :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the value of the array :");
    for(int i = 0 ; i<n; i++){
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);
    for(int i = 0 ; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}