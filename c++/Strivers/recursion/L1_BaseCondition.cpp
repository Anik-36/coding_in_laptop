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
    cout<<ct<<" ";
    ct++;
    f();
    cout<<"i am f "<<ct<<endl;
}
int main(){
    f();
}