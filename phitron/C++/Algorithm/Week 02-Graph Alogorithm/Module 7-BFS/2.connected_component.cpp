#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e3+10;
vector<int> a[N];
int visited[N];

void dfs(int u){
    cout<<u<<" ";
    visited[u] = true;
    for(int j: a[u]){
        if(visited[j]) continue;
        dfs(j);
    }
}
void bfs(int s){
    visited[s] = true;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v : a[u]){
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
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
    int cc = 0;
    for(int i = 1; i<=n; i++){
        if(visited[i]) continue;
        cout<<"Connected components of Node "<<cc+1<<" : ";
        dfs(i);
        cout<<endl;
        cc++;
    }
    cout<<"Number of Connected components : "<<cc<<endl;
}