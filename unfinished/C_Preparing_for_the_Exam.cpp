#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[m], q[k];
        for(int i = 0; i<m; i++){
            cin>>a[i];
        }
        for(int i = 0; i<k; i++){
            cin>>q[k];
        }
        int ct = 0;
        if(n==m){
            for(int i = 0; i<m; i++){
                for(int j=0; j<m; j++){
                    if(i==j) continue;
                    if(a[j]==a[i]) ct++;

                }
            }
        }
    }
}