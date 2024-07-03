#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i<n; i++){
        printf("%d ",a[i]);
    }
    for(int i = 0 , j = n-1; i<j; i++,j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("\n");
    for(int i = 0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}