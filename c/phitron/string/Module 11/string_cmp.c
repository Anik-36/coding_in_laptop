#include<stdio.h>
int main(){
    char a[100], b[100];
    scanf("%s%s",&a,&b);
    int v = strcmp(a,b);
    printf("%d",v);
    return 0;
}