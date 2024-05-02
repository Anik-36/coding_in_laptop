#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    int v;
    printf("enter the value you search : ");
    scanf("%d",&v);
    int loc = -1;
    int l=0 , r = n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid] == v){
            loc = mid+1;
            break;
        }else if(v<a[mid]){
            r = mid -1;
        }else{
            l = mid +1;
        }
    }
    if(loc == -1){
        printf("element is not found.");
    }else{
        printf("element is  founded and its location is = %d.",loc);

    }

    return 0 ;
}