#include<stdio.h>
int main(){
    int a[20] = {3,2,5,67,8};
    int n = 5 ;
    for(int i=0 ; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\nenter the position of insert : ");
    int p;
    scanf("%d",&p);
    printf("enter the value of insert : ");
    int v;
    scanf("%d",&v);
    for(int i= n ; i>=p; i--){
        a[i] = a[i-1];
    }
    a[p-1] = v;
    
    for(int i=0 ; i<=n; i++){
        printf("%d ",a[i]);
    }
}