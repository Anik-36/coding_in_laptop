/*
Question: You will be given an adjacency matrix for a directed graph (index starting from 1) as input. Now, convert it to an adjacency list and print it.


Sample Input
Sample Output
4
0 0 0 1
1 0 0 1
1 1 0 0
0 0 1 0
List 1 : 4
List 2 : 1 4
List 3 : 1 2
List 4 : 3


5
0 0 0 0 0
1 0 0 1 1
1 1 0 1 1
1 1 1 0 0
0 0 1 0 0
List 1 :
List 2 : 1 4 5
List 3 : 1 2 4 5
List 4 : 1 2 3
List 5 : 3
*/

#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e3+10;
vector<int> l[N];
int a[N][N];
int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cin>>a[i][j];
            if(a[i][j]){
                int u = i;
                int v = j;
                l[u].push_back(v);
            }
        }
    }
    for(int i = 1; i<=n; i++){
        cout<<"List "<<i<<": ";
        for(int j: l[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}