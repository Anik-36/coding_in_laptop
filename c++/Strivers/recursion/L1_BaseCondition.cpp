#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
int ct = 0;
using namespace std;
void f(){
    if(ct==3)
        return;
    cout<<ct<<" "<<endl;
    ct++;
    f();
}
int main(){
    f();
}