#include<stdio.h>
#include<string.h>
int main(){
    char a[100], b[100];
    scanf("%s%s",&a,&b);
    for(int i = 0; i<strlen(b); i++){
        a[i] = b[i];
    }
    // a[strlen(b)] = '\0';
    for(int i = 0; i<strlen(a); i++){
        printf("%c",a[i]);
    }
    // printf("%s",a);
    return 0;
}
// new push