/*
https://cses.fi/problemset/task/1193
*/

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
int n,m;
vector<pii> direc = {{0,1},{0,-1},{1,0},{-1,0}};
bool isValid(int i ,int j){
    return (i>=0 and i<n and j>=0 and j<m);
}
void bfs(int si,int sj){
    queue<pii> q;
    q.push({si,sj});
    visited[si][sj] = true;
    level[si][sj] = 0;
    while(!q.empty()){
        pii upair = q.front();
        int i = upair.first;
        int j = upair.second;
        q.pop();
        for(auto d:direc){
            int ni= d.first+i;
            int nj= d.second+j;
            if(isValid(ni,nj) and !visited[ni][nj] and g[ni][nj] != '#'){
                q.push({ni,nj});
                visited[ni][nj] = true;
                level[ni][nj] = level[i][j]+1;
                parrent[ni][nj] = {i,j};
            }
        }
    }
}
int main(){
    cin>>n>>m;
    int si,sj,di,dj;
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
        g.push_back(x);
    }

    bfs(si,sj);
    if(level[di][dj]!=0){
        cout<<"YES"<<endl;
        cout<<level[di][dj]<<endl;
    }else{
        cout<<"NO"<<endl;
        return 0;
    }
    vector<pii> path;
    pii curr = {di,dj};
    while(!(curr.first == si and curr.second == sj)){
        path.push_back(curr);
        curr = parrent[curr.first][curr.second];
    }
    path.push_back({si,sj});
    reverse(path.begin(),path.end());
    for(int i = 1; i<path.size(); i++){
        if(path[i-1].first == path[i].first){
            if(path[i-1].second == path[i].second-1){
                cout<<"R";
            }else{
                cout<<"L";
            }
        }else{
            if(path[i-1].first == path[i].first-1){
                cout<<"D";
            }else{
                cout<<"U";
            }
        }
    }
}