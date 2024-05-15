#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n , c = 0, ct = 0;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    c = n;
    while(c == n){
        c = 0;
        for(int i =0 ; i<n; i++){
            if(a[i]%2 == 0){
                a[i]/=2;
                c++;
            }
        }
        if(c == n){
            ct++;
        }
    }
    cout<<ct<<endl;

}