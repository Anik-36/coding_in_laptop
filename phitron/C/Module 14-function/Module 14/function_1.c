#include<stdio.h>

// return_type function_name(parameter){
//     code;
//     return what?
// }
int sum(int x , int y){
    int sum = x+y;
    return sum;
}
int main(){
    int a , b;
    scanf("%d %d",&a,&b);
    int s = sum(a,b);
    printf("%d\n",s);
    //printf("%d\n",sum(100,300));
    return 0;
}