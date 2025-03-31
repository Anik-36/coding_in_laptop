#include<stdio.h>
int main(){
    char a[]={"nrcisrat"};
    char b[]={"anik"};
    int length= (sizeof(a)/sizeof(a[0]))-1;
    printf("%d",length);
    return 0;
}
