/*
https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-03/challenges/distance-11-1
*/
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
bool bfs(int s, int d){
    bool flag = false;
    visited[s] =true;
    level[s] = 0;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v : adlist[u]){
            if(v == d) flag = true;
            if(visited[v]) continue;
            visited[v] = true;
            level[v] = level[u] + 1;
            q.push(v);
        }
    }
    return flag;
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
    int q;
    cin>>q;
    while(q--){
        memset(visited,0,N);
        memset(level,0,N);
        int u,v;
        cin>>u>>v;

        if(u<n and v<n){
            bool flag = bfs(u,v);
            if(flag){
                int ans = abs(level[u] - level[v]);
                cout<<ans<<endl;
            }else{
                cout<<"-1"<<endl;
            }
        }else{
            cout<<"-1"<<endl;
        }
    }
}