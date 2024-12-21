#include<stdio.h>
#include<string.h>
int main(){
    int s = 10^7+10;
    char a[s];
    scanf("%s",a);
    int f[26] = {0};
    for(int i=0 ; i<strlen(a); i++){
        f[a[i]-'a']++;
    }
    for(int i = 0 ; i<strlen(a); i++){
        if(f[a[i]-'a']>0){
            printf("%c : %d\n",a[i],f[a[i]-'a']);
            f[a[i]-'a'] = 0;
        }
    }
    return 0;
}