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






// Step 1 - If the element is the first element, assume that it is already sorted. 
// Return 1.
// Step 2 - Pick the next element, and store it separately in a key.
// Step 3 - Now, compare the key with all elements in the sorted array.
// Step 4 - If the element in the sorted array is smaller than the current 
// element, then move to the next element. Else, shift greater elements in the 
// array towards the right.
// Step 5 - Insert the value.
// Step 6 - Repeat until the array is sorted