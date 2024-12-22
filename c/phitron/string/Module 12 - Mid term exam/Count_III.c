#include<stdio.h>
#include<string.h>
int main(){
    char a[1001];
    scanf("%s",&a);
    int f[26] = {0};
    int len = strlen(a);
    for(int i = 0; i<len; i++){
        f[a[i]-'a']++;
    }
    for(int i = 0 ;i<26; i++){
        printf("%c - %d\n",i+'a',f[i]);
    }
    return 0;
}