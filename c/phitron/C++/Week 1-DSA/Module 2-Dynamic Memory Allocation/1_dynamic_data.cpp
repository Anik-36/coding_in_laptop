#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int * a = new int ;
    * a = 40;
    cout<<a<<endl;
    cout<<*a<<endl;

    float * b = new float ;
    *b = 5.265;
    cout<<b<<endl;
    cout<<*b<<endl;
    // deleting the variable
    delete b;
    cout<<*b<<endl;
}