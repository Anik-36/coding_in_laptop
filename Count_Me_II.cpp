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
        int h = INT_MIN;
        int mx = INT_MIN;
        for(int i = 0 ; i<n; i++){
            cin>>a[i];
            mp[a[i]]++;
            if(mp[a[i]]>mx) mx = mp[a[i]];
        }
        sort(a,a+n,greater<int>());
        for(int i = 0; i<n; i++){
            if(mp[a[i]] == mx){
                cout<<a[i]<<" "<<mp[a[i]]<<endl;
                break;
            }
        }
    }
}