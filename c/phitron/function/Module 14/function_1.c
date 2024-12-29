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
    int s = sum(10,20);
    printf("%d\n",s);
    return 0;
}