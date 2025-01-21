#include<stdio.h>
#include<string.h>
int main(){
    char a[1001];
    fgets(a,1001,stdin);
    int lenght = strlen(a);
    int cc = 0, sc = 0, spc = 0;
    for(int i = 0; i<lenght; i++){
        if(a[i]>='a' && a[i]<='z'){
            sc++;
        }
        else if(a[i]>='A' && a[i]<='Z'){
            cc++;
        }else{
            spc++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n",cc,sc,spc);
    return 0;
}