#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int a ,b;
    cin>>a>>b;
    int n = 1 , ct = 0;
    while(n){
        a*=3;
        b*=2;
        ct++;
        if(a>b){
            n=0;
        }
    }
    cout<<ct<<endl;
}   