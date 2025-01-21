#include<stdio.h>
#include<string.h>
int main(){
    char a[1001],b[1001];
    scanf("%s",&a);
    strcpy(b,a);
    int i = 0, j = strlen(a)-1;
    while(i<j){
        char tmp = b[i];
        b[i] = b[j];
        b[j] = tmp;
        i++;
        j--;
    }
    int check = strcmp(a,b);
    if(check==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}