#include<stdio.h>
#include<string.h>
int main(){
    char a[1001];
    int cs = 0, cc = 0;
    scanf("%s",&a);
    int len = strlen(a);
    for(int i = 0 ; i<len; i++){
        if(a[i]>='a' && a[i]<='z'){
            cs++;
        }else cc++;
    }
    printf("%d %d\n",cc,cs);
    return 0;
}