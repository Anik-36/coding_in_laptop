#include<stdio.h>
int main(){
    int a[2][3];
    int b[2][3];
    int sum[2][3]={0};
    printf("enter the input of the matrix =  \n");
    //taking input for a
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    // taking input for b

    printf("b= ");
     for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n\n");
    //printing a
    printf("a= ");
     for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("\t%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("b= ");
    printf("\n\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("\t%d ",b[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            sum[i][j]= a[i][j]+b[i][j];
        }
    }
    printf("\n\nsum= ");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("\t%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
