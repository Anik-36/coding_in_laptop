#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e5+10;
vector<int> a[N];
bool visited[N];
int depth[N];
int height[N];
void dfs(int u){
    visited[u] = true;
    for(int v : a[u]){
        if(visited[v]) continue;
        depth[v] = depth[u]+1;
        dfs(v);
        height[u] = max(height[v]+1,height[u]);
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 1; i<=m; i++){
        int u ,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    dfs(1);
    for(int i = 1; i<=n; i++){
        cout<<"Depth of Node "<<i<<" : ";
        cout<<depth[i]<<endl;
    }
    cout<<"*********************"<<endl;
    for(int i = 1; i<=n; i++){
        cout<<"Height of Node "<<i<<" : ";
        cout<<height[i]<<endl;
    }
}