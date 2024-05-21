#include<stdio.h>
void bubble_sort(int a[], int n){
    for(int i = n-1; i>=1; i--){
        for( int j = 0; j<i; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main(){
    int n;
    printf("Enter the number of the element :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the value of the array :");
    for(int i = 0 ; i<n; i++){
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    for(int i = 0 ; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}





// Step 1. Repeat Steps 2 and 3 for K=1 to N-1.
// Step 2. Set PTR:=1 [Initialize pass pointer PTR]
// Step 3. Repeat while PTR<=N-K [Execute pass.]
    //  (a) If DATA[PTR]>DATA[PTR+1], then:
    // Interchange Data[PTR] and DATA[PTR+1].
    // [End of IF Structure]
    //  (b) Set PTR:=PTR+1.
    // [End of inner loop.]
    //  [End of Step 1. outer loop.]
// Step 4. Exit.