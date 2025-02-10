#include<stdio.h>
int main(){
    char a[100], b[100];
    scanf("%s%s",&a,&b);
    int v = strcmp(a,b);

    //printf("%d",v);  it gives -1 0 1; 1 means a boro

    if(v>0){
        printf("B choto");
    }else if(v<0){
        printf("A choto");
    }else{
        printf("Same");
    }
    return 0;
}