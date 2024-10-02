#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n , h;
    cin>>n>>h;
    int ct = 0;
    int a[n];
    for(int i =0 ;i<n; i++){
        cin>>a[i];
    }
    for(int i =0 ;i<n; i++){
        if(a[i]>h){
        ct = ct+2;
        }else{
            ct = ct+1;
        }
    }
    
    cout<<ct<<endl;

}