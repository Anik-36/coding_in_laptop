#include<stdio.h>
void print_array(int a[r][c], int r,int c){
    if(r<0 && c<0) return;
    print_array(a,r-1,c-1);
    printf("%d ",a[r][c]);
    return;
}
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    print_array(a,r-1,c-1);
    return 0;
}