#include<stdio.h>
void swap(int * a, int * b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void sort_array(int * a, int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            if(a[j]>a[i]){
                swap(&a[i],&a[j]);
            }
        }
    }
}
int main(){
    int a[3],b[3];
    for(int i = 0;  i<3; i++){
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
    sort_array(a,3);
    for(int i =0; i<3; i++){
        printf("%d\n",a[i]);
    }
    printf("\n");
    for(int i=0; i<3; i++){
        printf("%d\n",b[i]);
    }
    return 0;
}