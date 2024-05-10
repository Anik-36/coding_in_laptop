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
        string s , r , f,l;
        cin>>s;
        r = s;
        sort(s.begin(), s.end());
        if(r == s){
            sort((s.begin()), s.end(), greater<char>());
            if(r == s) no
        }
        else{
            yes
            cout<<s<<endl;
        }

    }
}