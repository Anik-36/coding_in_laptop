#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int f[10010] = {0};
    int mn = INT_MAX;
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
        f[a[i]]++;
        if(a[i]<mn) mn = a[i];
    }
    if(f[mn]%2!=0) printf("Lucky\n");
    else printf("Unlucky\n");
    return 0;
}