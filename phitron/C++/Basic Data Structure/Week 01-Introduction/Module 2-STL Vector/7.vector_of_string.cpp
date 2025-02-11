#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v;
    for(int i = 0; i<n; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(string val : v){
        cout<<val<<endl;
    }
}