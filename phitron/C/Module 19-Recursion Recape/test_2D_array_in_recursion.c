// #include<stdio.h>
// void print_array(int r,int c,int a[r+1][c+1] ){
//     if(r<0 && c<0) return;
//     print_array(r-1,c-1,a);
//     printf("%d ",a[r][c]);
//     // for(int i = 0; i<=r; i++){
//     //     for(int j = 0; j<=c; j++){
//     //         printf("%d ",a[i][j]);
//     //     }
//     //     printf("\n");
//     // }
//     return;
// }
// int main(){
//     int r,c;
//     scanf("%d%d",&r,&c);
//     int a[r][c];
//     for(int i = 0; i<r; i++){
//         for(int j = 0; j<c; j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     print_array(r-1,c-1,a);
//     return 0;
// }





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








#include <stdio.h>

// Function to calculate the sum of two matrices using recursion
void matrixSum(int R, int C,int A[R][C], int B[R][C],  int i, int j, int result[R][C]) {
    // Base condition: If we traverse all rows
    if (i == R) {
        return;
    }
    // Move to the next row when column traversal is done
    if (j == C) {
        matrixSum( R, C , A, B, i + 1, 0, result);
        return;
    }
    // Calculate sum for the current element
    result[i][j] = A[i][j] + B[i][j];
    // Recursively move to the next element in the row
    matrixSum( R, C , A, B, i, j + 1, result);
}

int main() {
    int R, C;
    int A[100][100], B[100][100], result[100][100];

    // Input dimensions
    scanf("%d %d", &R, &C);

    // Input matrix A
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Call the recursive function to calculate the sum
    matrixSum( R, C , A, B, 0, 0, result);

    // Output the result
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

