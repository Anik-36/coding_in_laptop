#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;

typedef pair<int,int> pii;
const int N = 1e3+10;
vector<pii> adlist[N];
const int INF = 1e9+10;
bool visited[N];
vector<int> dist(N,INF);

void dijkstra(int source){
    priority_queue<pii, vector<pii>, greater<pii>> p;
    dist[source] = 0;
    p.push({dist[source],source});
    while(!p.empty()){
        int u = p.top().second;
        p.pop();
        visited[u] = true;
        for(pii vpair : adlist[u]){
            int v = vpair.first;
            int w = vpair.second;
            if(visited[v]) continue;
            if(dist[v]> dist[u]+w){
                dist[v] = dist[u] + w;
                p.push({dist[v],v});
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 1; i<=m; i++){
        int u,v,w;
        cin>>u>>v>>w;
        adlist[u].push_back({v,w});
        adlist[v].push_back({u,w});
    }
    dijkstra(1);
    for(int i = 1; i<=n ; i++){
        cout<<"Distance of "<<i<<" : "<<dist[i]<<endl;
    }
}