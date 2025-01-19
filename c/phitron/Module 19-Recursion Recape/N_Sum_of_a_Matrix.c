#include<stdio.h>
void sum_of_matrix(int r, int c, int a[r][c],int b[r][c],int s[r][c]){
    if(r<0 || c<0) return;
    s[r][c] = a[r][c]+b[r][c];
    for(int i = 0;i <r; i++){
        sum_of_matrix(a,b,s,r,c-1);
    }
    return;
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
    sum_of_matrix(a,b,s,r-1,c-1);
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
           // s[i][j] = a[i][j]+b[i][j];
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}