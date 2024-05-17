#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    for(int i= 0 ; i<a.size(); i++){
        if(a[i]!=b[i]) cout<<1;
        else cout<<"0";
    }
    cout<<endl;

}