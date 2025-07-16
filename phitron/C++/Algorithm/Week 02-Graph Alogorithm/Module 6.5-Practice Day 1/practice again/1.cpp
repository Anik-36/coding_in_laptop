/*
Question: You will be given an undirected graph. Print its DFS traversal in reverse order. Consider root as 1.

Sample Input
Sample Output
4
4
1 2
4 3
3 2
2 4

3 4 2 1
( 4 3 2 1 is also valid ans)

*/

#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e5+10;
vector<int> a[N];
bool visited[N];
void dfs(int u){
    visited[u] = true;
    for(auto v: a[u]){
        if(visited[v]) continue;
        dfs(v);
    }
    cout<<u<<" ";
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 0; i<m; i++){
        int u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    dfs(1);
}