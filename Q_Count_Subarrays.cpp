#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int ct = 0 , bt = 0;
        for(int i = 0 ; i<n; i++){
            cin>>a[i];
            ct++;
        }
        for(int i = 0 ; i<n-1; i++){
            for(int j = i+1 ; j<n; j++){
                if(a[i]>a[j]){
                    bt++;
                }
            }
            if(bt<1){
                ct++;
            }
        }
        cout<<ct<<endl;
    }
}