#include<stdio.h>
#include<string.h>
const int N = 1e7+10;
char a[N];
int main(){
    scanf("%s",a);
    int f[26] = {0};
    int len = strlen(a);
    for(int i=0 ; i<len; i++){
        f[a[i]-'a']++;
    }
    for(int i = 0 ; i<26; i++){
        if(f[i]>0){
            printf("%c : %d\n",i+'a',f[i]);
            f[i] = 0;
        }
    }
    return 0;
}