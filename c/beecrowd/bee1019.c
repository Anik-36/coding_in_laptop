#include<stdio.h>
int main(){
    int n,s,m,h,r;
    scanf("%d",&n);
    r = n/60;
    s= n%60;
    h= r/60;
    m=r%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
