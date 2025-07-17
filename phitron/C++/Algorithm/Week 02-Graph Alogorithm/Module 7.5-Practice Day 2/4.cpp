/*

Question: You will be given an undirected graph as input. Now count its connected components and print it.

Sample Input
Sample Output
6
4
1 2
2 3
3 4
5 6
2
7
4
1 2
2 3
3 4
5 6
3

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
void dfs(int u){
    visited[u] = true;
    for(int v : adlist[u]){
        if(visited[v]) continue;
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
    int cc = 0;
    for(int i = 1; i<=n; i++){
        if(visited[i]) continue;
        dfs(i);
        cc++;
    }
    cout<<cc<<endl;
}