#include<stdio.h>
void print_even_indice(long long * a,int n){
    if(n<0) return;
    if(n%2==0){
        printf("%lld ",a[n]);
        n--;
    }else n--;
    print_even_indice(a,n);
}
int main(){
    int n;
    scanf("%d",&n);
    long long a[n];
    for(int i= 0; i<n; i++){
        scanf("%lld",&a[i]);
    }
    print_even_indice(a,n-1);
    return 0;
}