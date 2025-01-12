//Question: Show the 4 types of examples of functions given below with an example. You can give any example you want, but make sure you are giving different examples for all the four types..					Marks: 20
// Has Return + Parameter
// Has Return + No Parameter
// No Return + Parameter
// No Return + No Parameter

#include<stdio.h>
int return_parameter(int a, int b){
    int multiply = a*b;
    return multiply;
}
char * return_no_parameter(){
    return "Hello, Now I have learnt the function properly\n";
}
void no_return_parameter(int * a, int * b){
    int temp = *a;
    *a  = *b;
    *b = temp;
}
void no_return_no_parameter(){
    printf("I have no value to do anything");
}
int main(){
    int a = 10, b = 20;
    int multiply = return_parameter(a,b);
    printf("Using for multiply the numbers : ");
    printf("multiply = %d\n",multiply);
    printf("For give a welcoming message : ");
    printf("%s",return_no_parameter());
    printf("For swapping the numbers : ");
    no_return_parameter(&a,&b);
    printf("%d %d\n",a,b);
    no_return_no_parameter();
    return 0;
}