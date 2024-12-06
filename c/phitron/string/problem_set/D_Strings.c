#include<stdio.h>
#include<string.h>
int main(){
    char a[11], b[11];
    scanf("%s%s",a,b);
    int lenA = strlen(a);
    int lenB = strlen(b);
    char c[21];
    for(int i = 0 ; i<lenA; i++){
        c[i] = a[i];
    }
    for(int i = lenA,j = 0 ; i<lenB,j<lenB; i++,j++){
        c[i] = b[j];

    }
    printf("%d %d\n",lenA,lenB);
    for(int i = 0 ; i<lenA+lenB; i++){
        printf("%c",c[i]);
    }
    printf("\n");
    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;

    printf("%s ",a);
    printf("%s",b);
    return 0;
}