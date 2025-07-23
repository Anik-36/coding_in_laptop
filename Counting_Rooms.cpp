/*
https://cses.fi/problemset/task/1192/
*/
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e3+10;
bool visited[N][N];
vector<string> s;
int n,m;
bool isValid(int i , int j){
    return (i>=0 && i<n && j>=0 && j<m);
}
void dfs(int i , int j){

    if(!isValid(i,j)) return;
    if(s[i][j] == '#') return;
    if(visited[i][j]) return;
    visited[i][j] = true;

    dfs(i,j+1);
    dfs(i,j-1);
    dfs(i-1,j);
    dfs(i+1,j);
}
int main(){
    cin>>n>>m;
    for(int i = 0; i<n; i++){
        string  x;
        cin>>x;
        s.push_back(x);
    }
    int ct = 0;
    for(int i= 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(s[i][j] == '#') continue;
            if(visited[i][j]) continue;
            dfs(i,j);
            ct++;
        }
    }
    cout<<ct<<endl;
}