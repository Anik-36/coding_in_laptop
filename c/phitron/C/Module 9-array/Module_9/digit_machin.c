#include<stdio.h>
int main(){
    int a[10];
    for(int i = 0 ; i<10; i++){
        scanf("%d",&a[i]);
    }
    int current  = 0;
    for( int i=0; i<3; i++){
        current = a[current];
    }
    printf("%d",current);
}