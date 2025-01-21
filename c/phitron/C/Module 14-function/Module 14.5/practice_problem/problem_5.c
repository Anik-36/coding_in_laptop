//Question: Make a function named capital_to_small() which will take a capital alphabet as a parameter (which is a character) and it will convert that capital alphabet to small alphabet and return through that function. So, the return type will be char. Now in the main function take a character input which will be capital alphabets and call that function to get the small alphabet and print that in the main function.
char capital_to_small(char b){
    char s = b-'A'+'a';
    return s;
}
#include<stdio.h>
int main(){
    char b;
    scanf("%c",&b);
    char s = capital_to_small(b);
    printf("%c\n",s);
    return 0;
}