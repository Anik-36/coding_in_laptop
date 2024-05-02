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
        int n, ct = 0;
        cin>>n;
        string a;
        cin>>a;
        for(int i = 0 ; i<n ; i++){
            if(a[i]=='*' && a[i+1]=='*'){
                i=n;
            }
            else if(a[i]=='@'){
                ct++;
            }
        }
        cout<<ct<<endl;
    }
}