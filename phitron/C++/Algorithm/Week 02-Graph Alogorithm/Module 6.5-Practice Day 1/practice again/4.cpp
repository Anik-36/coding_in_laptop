/*
Question: You will be given an undirected graph as input. This graph will contain only one connected component. The edge number will be exactly node-1. Then take a node from the input and print its depth. Consider root as 1.

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
Depth of 7 = 1
7
6
1 2
2 4
2 5
1 3
3 6
1 7
4
Depth of 4 = 2

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
int depth[N];
void dfs(int u){
    visited[u] = true;
    for(int v : adlist[u]){
        if(visited[v]) continue;
        depth[v] = depth[u] +1;
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
    dfs(1);
    int d;
    cin>>d;
    cout<<"Depth of "<<d<<" = "<<depth[d]<<endl;
}