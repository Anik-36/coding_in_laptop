#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        list<int> l;
        for(int i= 0; i<n; i++){
            int x;cin>>x;
            l.push_back(x);
        }
        l.sort(greater<int>());
        l.unique();
        for(int val:l){
            cout<<val<<" ";
        }
        cout<<endl;
    }
}