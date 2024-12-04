#include<stdio.h>
int main(){
    char a[100];
    fgets(a,24,stdin);
    a[22] ='\0';
    printf("%s",a);
    return 0;
}