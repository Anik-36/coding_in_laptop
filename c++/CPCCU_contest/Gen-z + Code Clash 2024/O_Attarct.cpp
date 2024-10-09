#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int ct = 1;
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0 ; i<n-1; i++){
        if(a[i]==a[i+1]){
            ct = ct;
        }else{
            ct++;
        }
    }
    cout<<ct<<endl;
}