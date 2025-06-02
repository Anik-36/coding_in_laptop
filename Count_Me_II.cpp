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
        priority_queue<int> pq;
        // int h = INT_MIN;
        int mx = INT_MIN;
        for(int i = 0 ; i<n; i++){
            cin>>a[i];
            mp[a[i]]++;
            if(mp[a[i]]>mx) mx = mp[a[i]];
            pq.push(a[i]);
        }
        // sort(a,a+n,greater<int>());
        while(!pq.empty()){
            int t = pq.top();
            pq.pop();
            if(mp[t] == mx){
                cout<<t<<" "<<mp[t]<<endl;
                break;
            }
        }
    }
}