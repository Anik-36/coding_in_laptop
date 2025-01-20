#include<stdio.h>
#include<limits.h>
int max_number(int * a,int n, int mx,int i){
    if(i==n) return a[i];
    mx = max_number(a,n,mx,i+1);
    if(a[i]>mx){
        return a[i];
    }else return mx;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int mx = max_number(a,n-1,INT_MIN,0);
    printf("%d\n",mx);
    return 0;
}