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
        int a[n], b[n];
        for(int i= 0 ; i<n; i++){
            cin>>a[i];
        }
        for(int i= 0 ; i<n; i++){
            cin>>b[i];
        }
        int m = a[n-1], s = 0;
        for(int i = n-2; i>=0; i--){
            if(a[i]>b[i+1]){
                m+=a[i];
                s+=b[i+1];
            }
        }
        cout<<m-s<<endl;
    }
}