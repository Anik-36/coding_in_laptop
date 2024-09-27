#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    int ct = 0;
    while(n--){
        int a , b ,c;
        cin>>a>>b>>c;
        if((a+b+c)>=2){
            ct++;
        }
    }
    cout<<ct<<endl;
}