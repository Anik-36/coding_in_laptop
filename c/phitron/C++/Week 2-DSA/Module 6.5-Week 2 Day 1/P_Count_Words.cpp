#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int ct = 0;
    bool flag = false;
    while(ss>>word){
        for(char c:word){
            if((c>='A'&& c<='Z') || (c>='a' && c<='z')){
                flag = true;
                break;
            }else{
                flag = false;
            }
        }
        if(flag == true) ct++;
    }
    cout<<ct<<endl;
}