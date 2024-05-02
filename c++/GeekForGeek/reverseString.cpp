#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string a,r;
    cin>>a;
    for(int i = a.size()-1 ; i>=0; i--){
        r.push_back(a[i]);
    }
    cout<<r<<endl;
}