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
        string a, b;
        cin>>a>>b;
        cout<<b[0];
        for(int i = 1 ; i<a.size(); i++){
            cout<<a[i];
        }
        cout<<" "<<a[0];
        for(int i = 1 ; i<a.size(); i++){
            cout<<b[i];
        }
        cout<<endl;
    }
}