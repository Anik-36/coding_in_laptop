#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int ct = 0;
    int a[n];
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0 ; i<n; i++){
        if((a[i]>=a[k-1]) and (a[i]>0)){
            ct++;
        }
    }
    cout<<ct<<endl;
}