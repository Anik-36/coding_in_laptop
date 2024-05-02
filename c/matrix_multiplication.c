#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    int sum = 0 ;
    scanf("%d%d%d%d",&r1,&r2,&c1,&c2);
    int r[r1][c2];
    while(c1!=r2){
        printf("error ! give the meaning full row colomn value. ");
        scanf("%d%d%d%d",&r1,&r2,&c1,&c2);
    }
    int fm[r1][c1];
    int sm[r2][c2];
    for(int i = 0 ; i<r1; i++){
        for(int j = 0 ; j<c1; j++){
            printf("fm[%d][%d]=",i,j);
            scanf("%d",&fm[i][j]);
        }
    }
    for(int i = 0 ; i<r1; i++){
        for(int j = 0 ; j<c1; j++){
            printf("sm[%d][%d]=",i,j);
            scanf("%d",&sm[i][j]);
        }
    }
    for(int i = 0 ; i<r1; i++){
        for(int j = 0 ; j<c2; j++){
            for(int k = 0 ; k<c1; k++){
                sum += fm[i][k] * sm[k][j];
            }
            r[i][j]= sum;
            sum = 0;
        }
    }
    printf("mul = \n");
    for(int i = 0 ; i<r1; i++){
        for(int j = 0 ; j<c2; j++){
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }

    return 0;
}
