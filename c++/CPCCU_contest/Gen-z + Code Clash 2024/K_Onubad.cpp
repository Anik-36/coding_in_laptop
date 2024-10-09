#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string b ,t ;
    cin>>b>>t;
    int ct = 0;
    for(int i =0; i<b.size();i++){
        if(b[i] == t[b.size()-i-1]) ct++;
        //cout<<i;
        //cout<<t[b.size()-i-1]<<endl;
    }
    if(b.size()!=t.size()) no
    else if(ct == b.size()) yes
    else no
}