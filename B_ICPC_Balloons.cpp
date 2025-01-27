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
        string s;
        cin>>s;
        bool flag = true;
        int ct = 2;
        for(int i = 1; i<s.size(); i++){
            for(int j = 0; j<i; j++){
                if(s[i]==s[j]){
                    flag = false;
                    break;
                }else{
                    flag = true;
                }
            }
            if(flag == true){
                ct+=2;
            }else{
                ct++;
            }
        }
        cout<<ct<<endl;
    }
}