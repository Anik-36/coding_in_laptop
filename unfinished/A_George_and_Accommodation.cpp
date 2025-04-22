#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n, ct = 0;
    cin>>n;
    while(n--){
        int a , b;
        cin>>a>>b;
        int dif = b -a;
        if(dif>=2){
            ct++;
        }
    }
    cout<<ct<<endl;
}