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
        int n , mx = INT_MIN;
        cin>>n;
        int a[n];
        for(int i =0 ; i<n; i++){
            cin>>a[i];
        }
        for(int i =0 ; i<n; i++){
            cout<<a[i]<<" ";
        }
        for(int i =0 ; i<n-1; i++){
            mx = a[i];
            for(int j=i+1; j<n; j++){
                mx = max(mx,a[j]);
                cout<<mx<<" ";
            }
        }
        cout<<endl;
    }
}