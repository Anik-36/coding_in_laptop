#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0 ; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("enter the value you search : ");
    int v;
    scanf("%d",&v);
    int loc = -1;
    for(int i=0 ; i<n; i++){
        if(a[i]==v){
            loc = i+1;
        }
    }
    if(loc==-1){
        printf("the element is not found");
    }else{
        printf("the element is founded and its location is %d",loc);

    }
    return 0;
}