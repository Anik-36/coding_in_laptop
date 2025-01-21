#include<stdio.h>
void print_n_to_1(int n){
    if(n==1) {
        printf("%d",n);
        return;
    }
    printf("%d ",n);
    print_n_to_1(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    print_n_to_1(n);
    return 0;
}