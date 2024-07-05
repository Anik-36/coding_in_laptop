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
        string a;
        cin>>a;
        int ct = 1;
        for(int i = 0 ; i<a.size(); i++){
            if(a[i]=='0' and i==0){
                ct*=0;
                i = a.size()+1;
            }
            else if(a[i]=='?' and i!=0){
                ct*=10;
            }else if(a[i]=='?' and i==0){
                ct*=9;
            }
        }
        cout<<ct<<endl;
    }
}