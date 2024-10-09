#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n, d, w;
    int t = 0;
    cin>>n>>d>>w;
    for(int i = 1; i<=w;i++){
        t = t+ i*n;
    }
    int l = (t-d);
    if(l>0){
        cout<<l<<endl;
    }else cout<<"0"<<endl;
}