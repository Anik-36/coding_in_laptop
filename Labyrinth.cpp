#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e3+10;
vector<string> g;
typedef pair<int,int> pii;
int visited[N][N];
int level[N][N];
pii parrent[N][N];
vector<pii> direc = {{0,1},{0,-1},{1,0},{-1,0}};
int main(){
    int n,m;
    cin>>n>>m;
    int si,sf,di,dj;
    for(int i = 0; i<n; i++){
        string x;
        cin>>x;
        for(int j = 0; j<m; j++){
            if(x[j] == 'A'){
                si = i, sj = j;
            }
            if(x[j] == 'B'){
                di = i, dj = j;
            }
        }
        g.push(x);
    }

    bfs(si,sj);
    cout<<level[di][dj]<<endl;
}