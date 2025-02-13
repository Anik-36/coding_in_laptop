#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> fr(10e3+10,0);
    int ct = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        fr[a[i]]++;
    }
    sort(a.begin(),a.end());
    for(int i = 0 ; i<n; i++){
        if(fr[a[i]+1]>0){
            ct++;
        }
    }
    cout<<ct<<endl;
}