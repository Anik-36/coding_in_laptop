#include<stdio.h>
int main(){
    int row , col;
    scanf("%d%d",&row,&col);
    int a[row][col];
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int element = row*col;
    int cnt = 0;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(a[i][j]==0){
                cnt++;
            }
        }
    }
    if(element == cnt){
        printf("Zero Matrix\n");
    }else{
        printf("Not a zero matrx\n");
    }
    return 0;
}