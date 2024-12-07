#include<stdio.h>

void heapify(int* a, int curr, int size){
    int largest = curr;
    int leftChild = largest * 2 + 1;
    int rightChild = largest * 2 + 2;

    if(leftChild<size && a[leftChild]<a[largest]){ // if i change the greater than sign to less than sign it turns into min heap
        largest = leftChild;
    }
    if(rightChild<size && a[rightChild]<a[largest]){
        largest = rightChild;
    }
    if(largest!=curr){
        int temp = a[largest] ;
        a[largest] = a[curr];
        a[curr] = temp;

        heapify(a,largest,size);
    }

}
void heapSort(int* a, int n){
    for(int i = n/2-1; i>=0; i--){
        heapify(a,i,n);
    }
    for(int i = n-1; i>0; i--){
        int temp  = a[0] ;
        a[0] = a[i];
        a[i] = temp;

        heapify(a,0,i);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    heapSort(a,n);
    for(int i = 0 ; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}