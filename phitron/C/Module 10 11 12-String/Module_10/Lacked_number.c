#include<stdio.h>
#include<string.h>
int main(){
    char digit[10];
    gets(digit);
    int freq[10] = {0};
    for( int i = 0; i<10; i++){
        char c = digit[i];
        int a = c - '0';
        freq[a]++;
    }
    for(int i = 0 ; i<10; i++){
        if(freq[i] == 0){
            printf("%d",i);
        }
    }

    return 0;
}