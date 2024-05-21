#include<stdio.h>
int main(){
    char c[] = "This is a string";
    int size = sizeof(c)/sizeof(c[0]);
    printf("%s \n",c);
    c[6] = '\0';
    printf("%s \n",c);
    return 0;
}