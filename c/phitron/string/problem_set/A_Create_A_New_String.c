#include<stdio.h>
#include<string.h>
int main(){
    char s[1001], t[1001];
    scanf("%s %s",s,t);
    int lens = strlen(s);
    int lent = strlen(t);
    printf("%d %d\n",lens,lent);
    printf("%s %s\n",s,t);
    return 0;
}