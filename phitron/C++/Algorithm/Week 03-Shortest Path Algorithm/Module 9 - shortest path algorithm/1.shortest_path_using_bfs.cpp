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
int parent[N];
void bfs(int s){
    visited[s] = true;
    level[s] = 0;
    queue<int> q;
    q.push(s);
    parent[s] = -1;
    while(!q.empty()){
        int u = q.front();
        q.pop(); // O(n)
        for(int v : adlist[u]){
            // O(2xm). karon prottekta node maximum 2 bar kore visit hobe tar edge er jonno.(ekbar parrent hisebe ekbar child hisebe)
            if(visited[v]) continue;
            visited[v] = true;
            level[v] = level[u] + 1;
            q.push(v);
            parent[v] = u;
        }
    }
}
// graph ta jodi weighted na hoy tahole bfs diye ber kora jabe. nahole onno algorithm use korte hobe.
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 1; i<=m; i++){
        int u,v;
        cin>>u>>v;
        adlist[u].push_back(v);
        adlist[v].push_back(u);
    }
    int s,d;
    cin>>s>>d;
    bfs(s);
    cout<<"Distance = "<<level[d]<<endl;

    // for(int i = 1; i<=n; i++){
    //     cout<<"Parent of "<<i<<" = "<<parent[i]<<endl;
    // }

    vector<int> path;
    int current = d;
    while(current != -1){
        path.push_back(current);
        current = parent[current];
    }
    reverse(path.begin(),path.end());
    cout<<"Path : ";
    for(int i : path){
        cout<<i<<" ";
    }
}

// so the total complexity is O(m+n)