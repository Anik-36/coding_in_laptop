#include<stdio.h>
int main(){
    int a[4][3];
    for(int i =0; i<4; i++){
        for(int j = 0; j<3; j++){
            scanf("%d%d",&a[i],&a[j]);
        }
        printf("\n");
    }
    for(int i =0; i<4; i++){
        for(int j = 0; j<3; j++){
            printf("%d%d ",a[i],a[j]);
        }
        printf("\n");
    }
    return 0;
}