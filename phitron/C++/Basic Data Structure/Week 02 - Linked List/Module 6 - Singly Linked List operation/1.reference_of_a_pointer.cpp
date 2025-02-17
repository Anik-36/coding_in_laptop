#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void fun(int * &p){
    cout<<&p<<endl;
}
int main(){
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout<<&ptr<<endl;
}