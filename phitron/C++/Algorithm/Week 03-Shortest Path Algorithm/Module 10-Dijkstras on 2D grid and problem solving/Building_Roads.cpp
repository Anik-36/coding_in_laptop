/*
https://cses.fi/problemset/task/1666
*/

#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e5+10;
vector<int> adlist[N];
vector<bool> visited(N,false);
vector<int> leaders;
void dfs(int u){
    visited[u] = true;
    for(int v : adlist[u]){
        if(visited[v]) continue;
        visited[v] = true;
        dfs(v);
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 1; i<=m; i++){
        int u,v;
        cin>>u>>v;
        adlist[u].push_back(v);
        adlist[v].push_back(u);
    }
    for(int i = 1; i<=n; i++){
        if(visited[i]) continue;
        leaders.push_back(i);
        dfs(i);
    }
    cout<<leaders.size()-1<<endl;
    for(int i = 1; i<leaders.size(); i++){
        cout<<leaders[i-1]<<" "<<leaders[i]<<endl;
    }

}