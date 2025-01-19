#include<stdio.h>
void print_digit(int n){
    if(n==0) return;
    int x = n%10;
    print_digit(n/10);
    printf("%d ",x);
    return;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        print_digit(n);
        if(n==0) printf("0");
        printf("\n");
    }
    return 0;
}