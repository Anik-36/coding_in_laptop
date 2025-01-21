#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int mn = INT_MAX;
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
        if(a[i]<mn) mn = a[i];
    }
    int ct = 0;
    for(int i = 0;  i<n; i++){
        if(a[i]==mn) ct++;
    }
    if(ct%2!=0) printf("Lucky\n");
    else printf("Unlucky\n");
    return 0;
}