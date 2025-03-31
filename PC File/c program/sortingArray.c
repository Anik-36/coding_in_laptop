#include <stdio.h>
int main()
{
    int arr[] = {50, 20, 80, 70, 10,113,34325,2};
    int temp;

    int length = sizeof(arr)/sizeof(arr[1]);

    printf("Elements of original array: \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < length; i++) {
        for (int j = i+1; j < length; j++) {
           if(arr[i] > arr[j]) {//arr[0]>arr[1]
               temp = arr[i];//temp=50,
               arr[i] = arr[j];//arr[0]=20
               arr[j] = temp;//arr[j]=50
           }
        }
    }

    printf("\n");

    printf("Elements of array sorted in ascending order: \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);//arr[0]
    }
    return 0;
}
