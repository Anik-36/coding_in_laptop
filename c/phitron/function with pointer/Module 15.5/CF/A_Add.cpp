#include<stdio.h>
int sum(int a, int b){
    int s = a+b;
    return s;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int s = sum(a,b);
    printf("%d\n",s);
    return 0;
}