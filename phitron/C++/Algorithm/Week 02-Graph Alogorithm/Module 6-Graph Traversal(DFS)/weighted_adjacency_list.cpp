#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e5+10;
vector< pair<int,int> > adj[N];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 1; i<=m; i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back(make_pair(u,w));
    }
    for(int i = 1 ; i<=n; i++){
        cout<<"List "<<i<<": ";
        for(auto j : adj[i]){
            cout<<"("<<j.first<<","<<j.second<<"),";
        }
        cout<<endl;
    }
}