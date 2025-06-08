#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e3+10;
vector<int> a[N];
int visited[N];
int level[N];

void bfs(int s){
    visited[s] = true;
    queue<int> q;
    q.push(s);
    level[s] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        // cout<<"Visited Node : "<<u<<endl;

        for(int v : a[u]){
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }
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
    bfs(1);
    for(int i = 1; i<=n; i++){
        cout<<"level of Node " <<i<<" : "<<level[i]<<endl;
    }
}