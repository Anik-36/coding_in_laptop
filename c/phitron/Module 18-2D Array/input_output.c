#include<stdio.h>
int main(){
    int a[4][3];
    for(int i = 0; i<4; i++){
        for(int j = 0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i =0; i<4; i++){
        for(int j = 0; j<3; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}