#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int target ;
    scanf("%d",&target);
    int l = 0;
    int h = n-1;
    while(l<h){
        int mid = (l+h)/2;
        if(a[mid]==target){
            printf("yes we got it");
        }
        
    }
    return 0;
}