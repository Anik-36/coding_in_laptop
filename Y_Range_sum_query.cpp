#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        int sum = 0;
        for(int i = l-1; i<r; i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}