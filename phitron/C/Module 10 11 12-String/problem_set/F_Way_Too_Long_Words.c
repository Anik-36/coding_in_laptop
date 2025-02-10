#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char a[101];
        int ct = 0;
        scanf("%s",a);
        int len = strlen(a);
        if(len>10){
            for(int i = 1; i<len-1; i++){
                ct++;
            }
            printf("%c%d%c\n",a[0],ct,a[len-1]);
        }else{
            printf("%s\n",a);
        }

    }
    return 0;
}