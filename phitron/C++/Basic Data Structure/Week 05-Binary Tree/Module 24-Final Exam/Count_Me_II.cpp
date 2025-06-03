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
        int n;
        cin>>n;
        int a[n];
        map<int,int> mp;
        for(int i = 0 ; i<n; i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int mx = 0, val = 0,x = 0, y = 0;
        for(auto it = mp.begin(); it!=mp.end(); it++){
            if(it->second>=mx){
                mx = it->second;
                val = it->first;
            }
        }
        cout<<val<<" "<<mx<<endl;
    }
}