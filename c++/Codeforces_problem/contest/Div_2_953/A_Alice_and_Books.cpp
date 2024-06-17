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
        int n;
        cin>>n;
        ll a[n];
        ll sum = 0;
        for(int i = 0 ; i<n; i++){
            cin>>a[i];
        }
        sum = a[n-1];
        ll mx = INT_MIN;
        for(int i=0 ;i<n-1; i++){
            if(a[i]>mx){
                mx = a[i];
            }
        }
        sum = sum + mx;
        cout<<sum<<endl;
    }
}