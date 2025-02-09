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
        if(a[0]>a[1]){
            j = b[0] - a[0];
            a[0] = j;
            if(a[0]>a[1]){
                flag = false;
            }
        }
        for(int i = 1; i<n-1; i++){
            if(a[i-1]>a[i] or a[i]>a[i+1]){
                j = b[0]-a[i];
                a[i] = j;
                if(a[i-1]>a[i] or a[i]>a[i+1]){
                    flag = false;
                }
            }
        }
        if(flag == true){
            yes
        }else{
            no
        }
    }
}