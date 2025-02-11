#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){

    // //type 1
    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i = 0; i<n; i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // for(int val : v){
    //     cout<<val<<" ";
    // }

    // type 2

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    for(int val : v){
        cout<<val<<" ";
    }
}