#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n];
    int s = 1e5+10;
    int f[s] = {0};
    for(int i = 0 ; i<n; i++){
        scanf("%d",&a[i]);
        f[a[i]]++;
    }
    for(int i = 1 ; i<=m; i++){
        printf("%d\n",f[i]);
    }
    return 0;
}