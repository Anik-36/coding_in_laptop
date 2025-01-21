#include<stdio.h>
#include<string.h>
int main(){
    char c[100] = {"hello world"};

    //int size = sizeof(c)/sizeof(c[0]); // it shows the array length not string size exactly
    // int ind = 0;
    // while(c[ind]!='\0'){
    //     ind++; // it works manually
    // }
    int len = strlen(c); // inbuilt function and it is in <string.h>
    
    printf("%d",len);
    
}