/*
Question: You will be given an undirected graph as input. This graph will contain only one connected component. The edge number will be exactly node-1. Then take a node from the input and print its height. Consider root as 1.

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
1
height of 1 = 2
7
6
1 2
2 4
2 5
1 3
3 6
1 7
7
height of 7 = 0

*/
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e3+10;
vector<int> a[N];
bool visited[N];
int height[N];
void dfs(int u, int x){
    visited[u] = true;
    for(int v : a[u]){
        if(visited[v]) continue;
        dfs(v,x);
        height[u] = max(height[v] + 1,height[u]);
    }
    if(u == x) cout<<"Depth of "<<u<<" = "<<height[u]<<endl;
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
    int x;
    cin>>x;
    dfs(1,x);
}