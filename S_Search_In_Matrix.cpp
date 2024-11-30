#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int d , ct = 0 ;
    for(int i = 0 ; i<n; i++){
        for(int  j = 0 ; j<m; j++){
            cin>>a[i][j];
        }
    }
    cin>>d;
    for(int i = 0 ; i<n; i++){
        for(int  j = 0 ; j<m; j++){
            if(a[i][j]==d) ct++;
        }
    }
    if(ct>0) cout<<"will not take number"<<endl;
    else cout<<"will take number"<<endl;
    
}