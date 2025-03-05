#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int p,q,r,s;
    cin>>p>>q>>r>>s;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i=p-1,j = r-1; i<q; i++,j++){
        swap(a[i],a[j]);
    }
    for(int i=0 ; i<n; i++){
        cout<<a[i]<<" ";
    }
}