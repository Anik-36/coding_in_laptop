#include<stdio.h>
#include<string.h>

int main(){
    char s[] = "hello world" ;
    char s1[10]; // if size is mismatched it cause the buffer overflow.
   
    //strcpy(s1,s); // it also can do buffer overflow . better use strncpy()
    strncpy(s1, s , 9); //strncpy( , , number_of_char)
    
    // int i = 0;
    // while(s[i]!='\0'){
    //     s1[i] = s[i];     // manually copying
    //     i++;
    // }  str[i] = '\0';
    

    printf("%s",s1);
}