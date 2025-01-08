// Question: Make a function named small_to_capital() which will take a small alphabet as a parameter (which is a character) and it will convert that small alphabet to capital alphabet and return through that function. So, the return type will be char. Now in the main function take a character input which will be small alphabets and call that function to get the capital alphabet and print that in the main function
char small_to_chapital(char c){
    int b = c - 'a' +'A';
    return b;
}
#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    char b = small_to_chapital(c);
    printf("%c\n",b);
    return 0;
}