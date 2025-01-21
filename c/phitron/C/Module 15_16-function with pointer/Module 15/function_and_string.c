#include<stdio.h>
#include<string.h>
void printArray(char * arr) {
    for (int i = 0; i < strlen(arr); i++) {
        printf("%c ", arr[i]);
    }
}
int main() {
    char arr[6] = "hello";
    printArray(arr);
    return 0;
}
