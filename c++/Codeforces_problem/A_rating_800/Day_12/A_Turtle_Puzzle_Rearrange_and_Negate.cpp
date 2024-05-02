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
        int sum = 0 ;
        cin>>n;
        int a[n];
        for(int i = 0 ; i<n; i++){
            cin>>a[i];
            if(a[i]<0){
                a[i] = abs(a[i]);
            }
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}