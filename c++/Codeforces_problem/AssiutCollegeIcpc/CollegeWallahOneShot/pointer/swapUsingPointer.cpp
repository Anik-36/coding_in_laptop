#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a = 2, b = 3;
    cout<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
}