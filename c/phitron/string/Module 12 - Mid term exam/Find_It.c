#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i<n; i++){
        scanf("%d",&a[i]);
    }
    int ct = 0;
    int x;
    scanf("%d",&x);
    for(int i = 0 ; i<n; i++){
        if(a[i]==x) ct++;
    }
    printf("%d\n",ct);
    return 0;
}