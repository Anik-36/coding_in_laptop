#include<stdio.h>
int main(){
    int fm[2][2],sm[2][2],r[2][2];
    for(int i = 0 ; i<2; i++){
        for(int j=0 ; j<2 ; j++){
            printf("fm[%d][%d] = ",i,j);
            scanf("%d",&fm[i][j]);
        }
    }
    for(int i = 0 ; i<2; i++){
        for(int j=0 ; j<2 ; j++){
            printf("sm[%d][%d] = ",i,j);
            scanf("%d",&sm[i][j]);
        }
    }
    for(int i = 0 ; i<2; i++){
        for(int j=0 ; j<2 ; j++){
            r[i][j] = 0;
            for(int k=0 ; k<2; k++){
                r[i][j] = r[i][j] + (fm[i][k] * sm[k][j]) ;
            }
        }
    }
    printf("r =\n");
    for(int i = 0 ; i<2; i++){
        for(int j=0 ; j<2 ; j++){
            printf("%d\t",r[i][j]);
        }
        printf("\n");
    }

    return 0 ;
}
