#include<stdio.h>
int main(){
    char c[10] ;
    //scanf("%s",c); // scanf() works token to token. space is the termintor of it.so we can use gets() instead of it.
    //gets(c); // gets() terminates on \n . it does the buffer over because it take any input but does not see the size of the array sizes. and that can leak the website data.so we use fgets() instead of it.
    fgets(c , 10 , stdin); // f means file
    printf("%s",c);
    //puts(c);
}