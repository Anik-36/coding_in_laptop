#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string s;
    getline(cin, s);
    for(int i=0 ; i<s.size(); i++){
        if(s[i]==' '){
            cout<<endl;
        }
        cout<<(char)((s[i])-32);
    }
    cout<<endl;
    // cin>>s;
    // cout<<s<<endl;
    // cout<<s.size()<<endl;
}