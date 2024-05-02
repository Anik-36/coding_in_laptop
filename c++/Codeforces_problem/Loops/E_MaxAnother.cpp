#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n, m, mx = INT_MIN;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m;
        if(m>mx){
            mx = m;
        }
    }
    cout<<mx<<endl;
}