#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string a;
    cin>>a;
    int ct = 0;
    int b[26]={0};
    int c[26]={0};
    for(int i = 0 ; i<a.size(); i++){
        // c[i] = (int)a[i];
        // cout<<c[i]<<endl;
        b[((int)a[i]-97)]++;
    }
    for(int i = 0 ; i<26; i++){
        //cout<<b[i]<<" ";
        if(b[i]>0){
            ct++;
        }
    }
    if(ct%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else {
        cout<<"IGNORE HIM!"<<endl;
    }
}