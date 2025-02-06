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
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>a[i][j];
        }
    }
    int ct = 0;
    int ans = 0;
    for(int i = 0; i<n; i++){
        int l = 0;
        int u = m-1;
        while(l<u){
            int mid = (l+u)/2;
            if(a[i][mid]<0){
                u = mid;
            }else{
                l = mid+1;
            }
            ans = mid;
        }
        if(l==u){
            if(a[i][l]<0){
                ans = l;
            }else{
                ans = l+1;
            }
        }
        ct += m - ans;
    }
    cout<<ct<<endl;
}