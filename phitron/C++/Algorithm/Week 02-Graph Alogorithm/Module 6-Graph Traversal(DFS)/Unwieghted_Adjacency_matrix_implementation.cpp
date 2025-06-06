#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e3+10;
int a[N][N];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 1; i<=m; i++){
        int u,v;
        cin>>u>>v;
        a[u][v] = 1; // only for directed.
        // a[v][u] = 1; // for undirected.
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}