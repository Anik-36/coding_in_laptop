#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n, i;
    cin>>n;
    int a[n];
    int mn = INT_MAX;
    for( i=1 ; i<=n; i++){
        cin>>a[i];
    }
    for( i=1 ; i<=n; i++){
        mn = min(mn,a[i]);
    }
    cout<<mn<<" ";
    for( i=1 ; i<=n; i++){
        if(mn == a[i]){
            cout<<i<<endl;
            break;
        }
    }
}