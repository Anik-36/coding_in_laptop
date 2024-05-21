#include<stdio.h>
int main(){
    int a[20] = {1,2,45,6,7};
    int n = 5;
    printf("before deletion the element is : ");
    for(int i =0 ;i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\nenter the position you delete : ");
    int p;
    scanf("%d",&p);
    for(int i=p; i<n; i++){
        a[i-1] = a[i];
    }
    n--;
    printf("after deletion the element is : ");
    for(int i =0 ;i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}