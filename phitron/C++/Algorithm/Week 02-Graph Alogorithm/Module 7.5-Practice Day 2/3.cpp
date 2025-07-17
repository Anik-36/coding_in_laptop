/*
Question: You will be given an undirected graph as input. Now print “YES” if there is a cycle and print “NO” if there isn’t any cycle. Consider root as 1.


Sample Input
Sample Output
4
4
1 2
2 3
3 4
4 2
YES
6
4
1 2
2 3
3 4
5 6
NO

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
bool dfs(int u,int p = -1){
    bool isCycle = false;
    visited[u] = true;
    for(int v : adlist[u]){
        if(v == p) continue;
        if(visited[v]) return true;
        isCycle |= dfs(v,u);
    }
    return isCycle;

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
    bool isCycle = false;
    for(int i = 1; i<=n; i++){
        if(visited[i]) continue;
        isCycle |= dfs(i);
    }
    if(isCycle) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}