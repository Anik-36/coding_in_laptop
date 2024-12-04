#include<stdio.h>
#include<string.h>
int main(){
    char a[1001];
    scanf("%s",a);
    int n = 0 , ct = 0;
    int len = strlen(a);
    if(len%2==0){
        for(int i = len/2-1; i>=0; i--){
            for(int j = len/2; j<len ; j++){
                if(a[i]==a[j]){
                    ct++;
                }
            }
        }
    }else{
        for(int i = len/2; i>=0 ; i--){
            for(int j = len/2+2; j<len ; j++){
                if(a[i] == a[j]){
                    ct++;
                }
            }
        }
    }
    if(ct==len/2){
        printf("NO\n");
    }else printf("YES\n");
    return 0;
}