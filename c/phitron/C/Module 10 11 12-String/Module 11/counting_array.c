#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i<n; i++){
        scanf("%d",&a[i]);
    }
    int ct[100] = {0};

    for(int i = 0 ; i<n; i++){
        ct[a[i]]++;
    }
    for(int i = 0 ; i<=21; i++){
        printf("%d -> %d\n",i,ct[i]);
    }
    return 0;
}