//Question: Write a function named is_palindrome() which will receive a string as parameter from the main function and this function will return 1 if the string is palindrome, otherwise it will return 0. And with the help of this 1 or 0 print “Palindrome” or “Not Palindrome” in the main function.			Marks: 15

//Constraints: String length will be maximum 10.  example : madam

#include<stdio.h>
#include<string.h>
int is_palindrome(char * a){
    int flag = 0;
    if(strlen(a)==1) return 1;
    else if(strlen(a)%2==0){
        for(int i =strlen(a)/2-1, j = i+1; i>=0, j<strlen(a); i--,j++){
            if(a[i]!=a[j]) flag = 0;
            else flag = 1;
        }
    }else{
        for(int i =strlen(a)/2-1, j = i+2; i>=0, j<strlen(a); i--,j++){
            if(a[i]!=a[j]) flag = 0;
            else flag = 1;
        }
    }
    return flag;
}
int main(){
    char a[10];
    scanf("%s",a);
    int flag = is_palindrome(a);
    if(flag==1){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }
    return 0;
}