#include<stdio.h>
int char_to_ascii(char c){
    int a;
    // if(c>='a' && c<='z'){
    //     //a = c-'a'+'a';
    //     a = (int)c;
    // }else if(c>='A' && c<='Z'){
    //     //a = c - 'A'+'A';
    //     a = (int)c;
    // }else{
    //     //a = c - '0'+'0';
    //     a = (int)c;
    // }
    a = (int)c;
    return a;

}
int main(){
    char c;
    scanf("%c",&c);
    int a = char_to_ascii(c);
    printf("%d\n",a);
    return 0;
}