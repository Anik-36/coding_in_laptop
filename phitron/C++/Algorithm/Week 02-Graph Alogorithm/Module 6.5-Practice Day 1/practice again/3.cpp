/*
Question: You will be given a directed graph as input. Store this graph in an adjacency list. Now, convert this adjacency list to an adjacency matrix (index starting from 1) and print it. Consider root as 1.



Sample Input
Sample Output
3
5
1 2
2 3
1 3
3 1
3 2

0 1 1
0 0 1
1 1 0


*/
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e3+10;
int mat[N][N];
vector<int> adlist[N];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 1; i<=m; i++){
        int u,v;
        cin>>u>>v;
        adlist[u].push_back(v);
    }
    for(int i = 1; i<=n; i++){
        for(int v : adlist[i]){
            mat[i][v] = 1;
        }
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}