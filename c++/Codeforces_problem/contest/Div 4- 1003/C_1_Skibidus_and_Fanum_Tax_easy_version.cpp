#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        ll a[n],b[m];
        ll j ;
        bool flag = true;
        for(int i = 0 ; i<n; i++){
            cin>>a[i];
        }
        for(int i = 0 ; i<m; i++){
            cin>>b[i];
        }
        j = b[0] - a[0];
        if(j<a[0]){
            a[0] = j;
        }
        for(int i = 1; i<n; i++){
            if(a[i-1]<=a[i]){
                j = b[0] - a[i];
                if(j<a[i] and j>=a[i-1]){
                    a[i] = j;
                }
            }
            else{
                j = b[0]-a[i];
                if(j>=a[i-1]){
                    a[i] = j;
                }
            }
            if(a[i-1]>a[i]){
                flag = false;
            }
        }
        if(flag == true){
            yes
        }else{
            no
        }
    }
}