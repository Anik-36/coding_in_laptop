#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int e = 0 , o = 0 ;
    for(int i = 0 ; i<n; i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            e++;
        }else o++;
    }
    printf("%d %d\n",e,o);
    return 0;
}