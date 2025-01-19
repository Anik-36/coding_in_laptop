#include<stdio.h>
void print_array(int r,int c,int a[r+1][c+1] ){
    // if(r<0 && c<0) return;
    // print_array(a,r-1,c-1);
    // printf("%d ",a[r][c]);
    for(int i = 0; i<=r; i++){
        for(int j = 0; j<=c; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
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
    print_array(r-1,c-1,a);
    return 0;
}





// // The following program works only if your compiler is C99 compatible.
// #include <stdio.h>

// // n must be passed before the 2D array
// void print(int m, int n, int arr[][n]){
//     int i, j;
//     for (i = 0; i < m; i++){
//         for (j = 0; j < n; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int m = 3, n = 3;
//     print(m, n, arr);
//     return 0;
// }