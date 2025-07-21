#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e5+10;
vector<int> adlist[N];
bool visited[N];
int level[N];
void bfs(int s){
    visited[s] = true;
    level[s] = 0;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v : adlist[u]){
            if(visited[v]) continue;
            visited[v] = true;
            level[v] = level[u] + 1;
            q.push(v);
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    set<int> s;
    for(int i = 1 ; i<=m; i++){
        int u,v;
        cin>>u>>v;
        adlist[u].push_back(v);
        adlist[v].push_back(u);
        s.insert(u);
        s.insert(v);

    }
    bfs(*(s.begin()));
    int l;
    cin>>l;
    bool flag = false;
    for(int i : s){
        if(level[i] == l){
            cout<<i<<" ";
            flag = true;
        }
    }
    if(flag == false) cout<<"-1"<<endl;
}