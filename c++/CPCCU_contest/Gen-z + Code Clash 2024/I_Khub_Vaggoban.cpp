#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string s;
    cin>>s;
    int ct = 0;
    int n;
    for(int i = 0; i<s.size(); i++){
        //n = (int)s[i];
        //cout<<n<<endl;
        if((int)s[i]== 52 or (int)s[i] == 55){
            //cout<<s[i]<<endl;
            ct++;
        }
    }
    if(ct==4 or ct==7) yes
    else no
    //cout<<ct;
}