#include<stdio.h>
int sum_of_matrix(int * a,int * b,int * s,int r, int c){
    
}
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d",&b[i][j]);
        }
    }
    int s[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            s[i][j] = a[i][j]+b[i][j];
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}