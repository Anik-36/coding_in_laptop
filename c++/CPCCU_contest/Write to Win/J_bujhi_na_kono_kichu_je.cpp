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
        int cnt = 0;
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        if(a1>b1 and a2>b2) cnt+=2;
        if(a1>b2 and a2>b1) cnt+=2;
        cout<<cnt<<endl;
    }
}