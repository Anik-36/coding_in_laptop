#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e3+10;
// list diye easy dfs bfs kora.
vector<int> a[N];
bool visited[N];

void dfs(int u){
    visited[u] = true;
    cout<<"Visiting Node : "<<u<<endl;
    for(int j: a[u]){
        if(visited[j]) continue;
        dfs(j);
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 1; i<=m; i++){
        int u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    // for(int i = 1; i<=n; i++){
    //     cout<<"List "<<i<<": ";
    //     for(int j: a[i]){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    dfs(1);
}