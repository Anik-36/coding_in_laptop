#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e3+10;
vector<int> adlist[N];
bool visited[N];
int level[N];
int ct;
void bfs(int s){
    visited[s] = true;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v : adlist[u]){
            if(visited[v]) continue;
            ct++;
            visited[v] = true;
            q.push(v);
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 1; i<=m; i++){
        int u,v;
        cin>>u>>v;
        adlist[u].push_back(v);
    }
    int k;
    cin>>k;
    bfs(k);
    cout<<ct<<endl;
}