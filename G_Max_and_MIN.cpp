#include<stdio.h>
#include<limits.h>
int mini(int * a, int n){
    int mn = __INT_MAX__;
    for(int i = 0; i<n; i++){
        if(a[i]<mn){
            mn = a[i];
        }
    }
    return mn;
}
int maxi(int * a, int n){
    int mx = INT_MIN;
    for(int i = 0; i<n; i++){
        if(a[i]>mx){
            mx = a[i];
        }
    }
    return mx;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int mn = mini(a,n);
    int mx = maxi(a,n);
    printf("%d %d\n",mn,mx);
    return 0;
}