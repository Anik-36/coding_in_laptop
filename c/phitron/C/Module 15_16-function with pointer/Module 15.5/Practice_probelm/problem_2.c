//Question: Write a function named my_len() which receives a string as a parameter and then counts the length of that string and returns that count. Don’t use strlen() function to get the length of the string. After receiving that count in the main function print it.
//Note: The string will not have any spaces

#include<stdio.h>
int my_len(char * a){
    int len = 0;
    for(int i = 0; a[i]!='\0'; i++){
        len++;
    }
    return len;
}
int main(){
    char a[1000];
    scanf("%s",&a);
    int length = my_len(a);
    printf("%d\n",length);
    return 0;
}