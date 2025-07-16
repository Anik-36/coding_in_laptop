#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e3+10;
vector<int> a[N];
bool visited[N];

bool dfs(int u, int p = -1){
    bool isCycle = false;
    visited[u] = true;
    for(int v: a[u]){
        if(v == p) continue;
        if(visited[v]) return true;
        isCycle = isCycle | dfs(v,u);
    }
    return isCycle;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i =1; i<=m; i++){
        int u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    bool isCycle = false;
    for(int i = 1; i<=n; i++){
        if(visited[i]) continue;
        isCycle = isCycle or dfs(i);
    }
    if(isCycle){
        cout<<"Cycle detected !"<<endl;
    }else{
        cout<<"No cycle detected !"<<endl;
    }
}