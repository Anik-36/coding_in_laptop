#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int ct = 0;
    bool is_word = false;
    for(char c:s){
        if((c>='A'&& c<='Z') || (c>='a' && c<='z')){
            if(is_word == false){
                ct++;
                is_word  = true;
            }
        }else{
            is_word = false;
        }
    }
    cout<<ct<<endl;
}