/*

Question: You will be given an undirected graph as input. Now count its connected components and print it. Then print All the nodes in a connected component. See the sample output for more clarification.

Sample Input
Sample Output
6
4
1 2
2 3
3 4
5 6
2
Component 1 : 1 2 3 4
Component 2 : 5 6
8
4
1 2
2 3
3 4
5 6
4
Component 1 : 1 2 3 4
Component 2 : 5 6
Component 3 : 7
Component 4 : 8

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
vector<int> c[N];
void dfs(int u, int cc){
    visited[u] = true;
    c[cc].push_back(u);
    for(int v : adlist[u]){
        if(visited[v]) continue;
        dfs(v,cc);
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
        dfs(i,cc+1);
        cc++;
    }
    cout<<cc<<endl;
    for(int i = 1; i<=cc; i++){
        cout<<"Component "<<i<<": ";
        for(int v : c[i]){
            cout<<v<<" ";
        }
    }

}