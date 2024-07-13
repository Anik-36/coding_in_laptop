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
    int ct = 0;
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    for(int i = 1 ; i<n; i++){
        bool mn = true, mx = true;
        for(int j = 0 ; j<i; j++){
            if(a[j]<=a[i]){
                mn = false;
            }
            if(a[j]>=a[i]){
                mx = false;
            }
        }
        if(mn == true || mx == true){
            ct++;
        }
    }
    cout<<ct<<endl;

}