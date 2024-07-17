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
        string s;
        cin>>s;
        if(s.length()<=10){
            cout<<s<<endl;
        }else{
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
    }
}