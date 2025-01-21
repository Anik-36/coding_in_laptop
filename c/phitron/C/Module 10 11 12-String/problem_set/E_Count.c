#include<stdio.h>
#include<string.h>
int main(){
    char a[1000001];
    int sum = 0;
    scanf("%s",a);
    int len = strlen(a);
    for(int i = 0; i<len; i++){
        sum += (int)(a[i]-'0');
    }
    printf("%d",sum);
    return 0;
}