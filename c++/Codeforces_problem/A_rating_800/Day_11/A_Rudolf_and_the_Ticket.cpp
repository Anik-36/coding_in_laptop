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
        int m,n,o;
        cin>>m>>n>>o;
        int ct = 0 ;
        int a[m] , b[n];
        for(int i=0 ; i<m; i++){
            cin>>a[i];
        }
        for(int i=0 ; i<n; i++){
            cin>>b[i];
        }
        for(int i =0 ; i<m; i++){
            for(int j = 0 ; j<n; j++){
                if(a[i]+b[j]<=o){
                    ct++;
                }
            }
        }
        cout<<ct<<endl;
    }
}