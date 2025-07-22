#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e3+10;
vector<int> adlist[N];
bool visited[N];
int bfs(int s, int cc){
    visited[s] = true;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v : adlist[u]){
            if(visited[v]) continue;
            visited[v] = true;
            q.push(v);
            cc++;
        }
    }
    return cc;

}
int main(){
    int n,m;
    cin>>n>>m;
    set<int> s;
    for(int i = 1;  i<=m; i++){
        int u,v;
        cin>>u>>v;
        adlist[u].push_back(v);
        adlist[v].push_back(u);
        s.insert(u);
        s.insert(v);
    }
    vector<int> cc;
    for(int i : s){
        if(visited[i]) continue;
        int c = bfs(i, 1);
        if(c!=1){
            cc.push_back(c);
        }
    }
    sort(cc.begin(),cc.end());
    for(int i : cc){
        cout<<i<<" ";
    }
}