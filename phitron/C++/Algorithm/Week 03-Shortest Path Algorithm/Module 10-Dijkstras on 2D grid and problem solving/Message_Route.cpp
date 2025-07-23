/*
https://cses.fi/problemset/task/1667/
*/

#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
const int N = 1e5 + 10;
vector<int> adlist[N];
vector<bool> visited(N, false);
vector<int> level(N, -1);
vector<int> parent(N, -1);
vector<int> path;
void bfs(int source)
{
    visited[source] = true;
    queue<int> q;
    q.push(source);
    level[source] = 1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adlist[u])
        {
            if (visited[v])
                continue;
            visited[v] = true;
            q.push(v);
            level[v] = level[u] + 1;
            parent[v] = u;
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adlist[u].push_back(v);
        adlist[v].push_back(u);
    }
    bfs(1);
    if (visited[n])
    {
        cout << level[n] << endl;
        int current = n;
        while (current != -1)
        {
            path.push_back(current);
            current = parent[current];
        }
        reverse(path.begin(), path.end());
        for (int i : path)
        {
            cout << i << " ";
        }
    }else{
        cout<<"IMPOSSIBLE"<<endl;
    }
}