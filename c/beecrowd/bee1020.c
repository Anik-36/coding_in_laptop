#include<stdio.h>
int main(){
    int n,y,m,d,r;
    scanf("%d",&n);
    y = n/365;
    r= n%365;
    m= r/30;
    d=r%30;
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
    return 0;
}
