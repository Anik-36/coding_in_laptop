#include<stdio.h>
int main(){
    float n;
    scanf("%f",&n);
    int temp = n*100;//9101
    int Int_value = temp/100; //91
    int Float_value = temp%100;//0.01->>1
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",Int_value/100);
    int reminder = Int_value%100;
    printf("%d nota(s) de R$ 50.00\n",reminder/50);
    reminder = reminder%50;
    printf("%d nota(s) de R$ 20.00\n",reminder/20);
    reminder = reminder%20;
    printf("%d nota(s) de R$ 10.00\n",reminder/10);
    reminder = reminder%10;
    printf("%d nota(s) de R$ 5.00\n",reminder/5);
    reminder = reminder%5;
    printf("%d nota(s) de R$ 2.00\n",reminder/2);
    reminder = reminder%2;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",reminder/1);
    printf("%d moeda(s) de R$ 0.50\n",Float_value/50);
    reminder = Float_value%50;
    printf("%d moeda(s) de R$ 0.25\n",reminder/25);
    reminder = reminder%25;
    printf("%d moeda(s) de R$ 0.10\n",reminder/10);
    reminder = reminder%10;
    printf("%d moeda(s) de R$ 0.05\n",reminder/5);
    reminder = reminder%5;
    printf("%d moeda(s) de R$ 0.01\n",reminder/1);
    return 0;
}
