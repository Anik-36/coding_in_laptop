/*
Question: You will be given an undirected graph as input. This graph will contain only one connected component. The edge number will be exactly node-1. Then take a node from the input and print its level. Consider root as 1.

Sample Input
Sample Output
7
6
1 2
2 4
2 5
1 3
3 6
1 7
7
Level of 7 = 1
8
7
1 2
2 4
2 5
1 3
3 6
1 7
4 8
8
Level of 8 = 3

*/

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
            q.push(v);
            visited[v] = true;
            level[v] = level[u]+1;
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
        adlist[v].push_back(u);
    }
    bfs(1);
    int q;
    cin>>q;
    cout<<"Level of "<<q<<" = "<<level[q]<<endl;
}