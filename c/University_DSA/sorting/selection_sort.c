#include<stdio.h>
void selection_sort(int a[],int n){
    for(int i = 0 ; i<n-1; i++){
        int mini = i;
        for(int j = i; j<n; j++){
            if(a[j]<a[mini]){
                mini = j;
            }
        }
        int temp = a[mini];
        a[mini] = a[i];
        a[i]  = temp;
    }
}
int main(){
    int n;
    printf("Enter the number of the element : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the value of the array : ");
    for(int i = 0 ; i<n; i++){
        scanf("%d",&a[i]);
    }
    selection_sort(a,n);
    printf("The sorted array is : ");
    for(int i = 0 ; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}




// 1. Set MIN to location 0.
// 2. Search the minimum element in the list.
// 3. Swap with value at location MIN.
// 4. Increment MIN to point to next element.
// 5. Repeat until the list is sorted.