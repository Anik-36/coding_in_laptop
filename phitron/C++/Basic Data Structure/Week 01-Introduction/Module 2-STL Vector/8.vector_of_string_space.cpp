#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<string> v(n);
    for(int i = 0; i<n; i++){
        getline(cin,v[i]);
    }
    for(string val : v){
        cout<<val<<endl;
    }
}