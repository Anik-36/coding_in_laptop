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
        int n , ct = 0;
        cin>>n;
        if(((n-1)%3==0) or ((n+1)%3==0)){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }
}