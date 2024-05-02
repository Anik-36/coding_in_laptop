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
        int i,b;
        cin>>i>>b;
        if(b>=(i-1)){
            cout<<"1"<<endl;
        }else{
            cout<<i<<endl;
        }
    }
}