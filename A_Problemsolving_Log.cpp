#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char s[n+1];
        int ct = 0;
        int hsh[501] = {0};
        for(int i=1; i<=n; i++){
            cin>>s[i];
            hsh[int(s[i])-64]++;
        }
        for(int i=1; i<=n; i++){
            if(hsh[i]>=i){
                ct++;
            }
        }
        cout<<ct<<endl;
    }
}