#include<stdio.h>
#include<string.h>

int main(){
    char a[10] = "Hello";
    char b[10] = "World";
    //strcat( a , b); // if size is not headech
    strncat( a , b , 4);

    printf("%s",a); // a = HelloWorl
}