#include<stdio.h>
int sum(void){  // using void give you a signal if you give any parameter to this function
    int x, y;
    scanf("%d%d",&x,&y);
    int s = x+y;
    return s;
}
int main(){
    int s =  sum();
    printf("%d\n",s);
    return 0;
}