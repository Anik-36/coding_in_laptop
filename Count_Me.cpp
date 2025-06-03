#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string sentence;
        getline(cin,sentence);
        map<string,int> mp;
        string word;
        stringstream ss(sentence);
        string ans;
        int ct;
        int mx = INT_MIN;
        while(ss>>word){
            mp[word]++;
            if(mp[word]>mx ){
                ans = word;
                ct = mp[word];
            }
            if(mp[word]>mx) mx = mp[word];

        }
        cout<<ans<<" "<<ct<<endl;
    }
}