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
void bfs(int s){
    visited[s] =true;
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
    for(int i = 1; i<=m; i++){
        int u,v;
        cin>>u>>v;
        adlist[u].push_back(v);
        adlist[v].push_back(u);
        s.insert(u);
        s.insert(v);
    }
    int q;
    cin>>q;
    while(q--){
        memset(visited,0,N);
        memset(level,0,N);
        int u,v;
        cin>>u>>v;
        if(u == v){
            cout<<"0"<<endl;
            continue;
        }
        else if(s.find(u)!=s.end() && s.find(v)!=s.end()){
            bfs(u);
            if(visited[v]){
                cout<<level[v]<<endl;
            }else{
                cout<<"-1"<<endl;
            }
        }else{
            cout<<"-1"<<endl;
        }
    }
}




/*

#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e5+5;
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
    for(int i = 1; i<=m; i++){
        int u,v;
        cin>>u>>v;
        adlist[u].push_back(v);
        adlist[v].push_back(u);
        s.insert(u);
        s.insert(v);
    }
    vector<int> vec;
    for(auto x : s) vec.push_back(x);
    memset(visited,false,sizeof(visited));
    memset(level,0,sizeof(level));
    int q;
    cin>>q;
    while(q--){
        int u,v;
        cin>>u>>v;
        if(u == v){
            cout << 0 << endl;
            continue;
        }
        else if(s.find(u) != s.end() && s.find(v) != s.end()) bfs(u);
        else{
            cout << -1 << endl;
            continue;
        }
        if(visited[v]){
            cout << level[v] << endl;
        }
        else cout << -1 << endl;
        for(auto x : vec){
            visited[x] = false;
            level[x] = 0;
        }
    }
}
    */
