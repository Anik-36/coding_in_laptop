#include<stdio.h>
int main(){
    int d,p;
    scanf("%d%d",&d,&p);
    int bm = 100-d;
    float op = 100.0*p/bm;
    printf("%.2f\n",op);
    return 0;
}