#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n , k , ct = 0;
    cin>>n>>k;
    int a[n];
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0 ; i<n; i++){
        if(a[i]>=a[k-1] and a[i] > 0){
           // cout<<a[i]<<" "<<a[k-1]<<endl;
            ct++;
            //cout<<ct<<endl;
        }
    }
    cout<<ct<<endl;
}