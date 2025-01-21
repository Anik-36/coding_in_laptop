#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s",a);
    int ct[26]= {0};
    for(int i = 0; i<strlen(a); i++){
        int v = a[i] - 'a';
        ct[v]++;
    }
    for(int i = 0 ; i<strlen(a); i++){
        int value = a[i] - 'a';
        if(ct[value]!=0){
            printf("%c -> %d\n",value+'a',ct[value]);
        }
        ct[value] = 0;
    }
    return 0;
}