#include<stdio.h>
int main(){
    char a[100];
    fgets(a,24,stdin);
    printf("%s",a);
    return 0;
}