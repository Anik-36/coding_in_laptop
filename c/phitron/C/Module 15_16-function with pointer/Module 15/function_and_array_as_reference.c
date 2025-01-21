#include<stdio.h>
void fun(int * a,int n){
    a[0] = 300;
}
int main(){
    int a[5] = {10,20,30,40,50};
    fun(a,5);
    for(int i = 0; i<5; i++){
        printf("%d ",i[a]);
    }
    return 0;
}