#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    int ct = 0;
    for(int i = 0 ; i<s.size()-1; i++){
        if(s[i]==s[i+1]){
            ct++;
        }
    }
    cout<<ct<<endl;
}