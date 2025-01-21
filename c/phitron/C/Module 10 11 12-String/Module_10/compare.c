#include<stdio.h>
#include<string.h>
int main(){
    char a[100] , b[100];
    scanf("%s %s",a,b);

    int m = strcmp(a,b); 
    // negative = a is smaller
    // positive = b is smaller
    // 0 = equal
    printf("%d",m);
    return 0;
}

/*

apple 
apples
apply

*/