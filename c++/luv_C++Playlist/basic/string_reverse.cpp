#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string s;
    cin>>s;
    string s_rev;
    // for(int i = s.size()-1; i>=0 ; i--){
    //     s_rev = s_rev + s[i];
    // }
    for(int i = s.size()-1; i>=0 ; i--){
        s_rev.push_back(s[i]);
    }
    cout<<s_rev;
}