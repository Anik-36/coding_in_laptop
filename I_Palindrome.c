#include<stdio.h>
#include<string.h>
int main(){
    char a[1001];
    scanf("%s",a);
    int n = 0 , ct = 0;
    int len = strlen(a);
    if(len%2==0){
        for(int i = len/2-1,j = len/2; i>=0,j<len; i--,j++){
            if(a[i]==a[j]){
                // printf("ok\n");
                // printf("%c %c\n",a[i],a[j]);
                ct++;
            }
        }
    }else{
        for(int i = (len/2)-1,j = len/2+1; i>=0 ,j<len; i--,j++){
            if(a[i] == a[j]){
                // printf("ok\n");
                ct++;
            }
        }
    }
    if(ct==len/2){
        printf("YES\n");
    }else printf("NO\n");
    return 0;
}


