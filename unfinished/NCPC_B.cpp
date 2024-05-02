#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;
    cin>>t;
    int count = 1;
    while(t--){
        int p,s,r;
        cin>>p>>s>>r;
        if(p==s && r!=1){
            cout<<"Case "<<count<<": No"<<endl;
        }else cout<<"Case "<<count<<": Yes"<<endl;
        count++;
    }
}