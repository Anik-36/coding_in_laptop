#include<stdio.h>
#include<string.h>
int main(){
    // char a[1001],b[1001];
    // scanf("%s",&a);
    // strcpy(b,a);
    // int i = 0, j = strlen(a)-1;
    // while(i<j){
    //     char tmp = b[i];
    //     b[i] = b[j];
    //     b[j] = tmp;
    //     i++;
    //     j--;
    // }
    // int check = strcmp(a,b);
    // if(check==0) printf("YES\n");
    // else printf("NO\n");
    // return 0;



    char a[1001];
    scanf("%s",&a);
    int i =0, j = strlen(a)-1;
    int flag  = 1;
    while(i<j){
        if(a[i]!=a[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag == 0) printf("NO\n");
    else printf("YES\n");
}