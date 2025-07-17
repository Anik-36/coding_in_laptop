/*

Question: You will be given an undirected graph. Print its BFS traversal in reverse order. Consider root as 1.
Note: In the explanation video there was a mistake, the explanation was for DFS traversal, but you have to do it using BFS traversal.

Sample Input
Sample Output
4
4
1 2
3 4
1 3
2 4
4 3 2 1
(4 2 3 1 is also valid ans)

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
stack<int> st;
void bfs(int s){
    visited[s] = true;
    queue<int> q;
    q.push(s);
    st.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v : adlist[u]){
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
            st.push(v);
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
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}