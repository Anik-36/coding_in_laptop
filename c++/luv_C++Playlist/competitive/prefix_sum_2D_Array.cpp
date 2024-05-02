#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
const int N = 1e3+10;
int ar[N][N];
int p[N][N];
int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1 ; j<=n ; j++){
            cin>>ar[i][j];
            p[i][j] = ar[i][j] + p[i-1][j] + p[i][j-1]-p[i-1][j-1];
        }
    }
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<p[c][d]-p[a-1][d] - p[c][b-1] + p[a-1][b-1]<<endl;
    }
}