#include<stdio.h>
#include<string.h>
int main(){
    char a[100], b[100];
    scanf("%s",&b);
    for(int i = 0; i<strlen(b); i++){
        printf("%c",b[i]);
    }
    return 0;
}