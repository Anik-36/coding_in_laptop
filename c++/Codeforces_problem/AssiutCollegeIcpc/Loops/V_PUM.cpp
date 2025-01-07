#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    int j = 1;
    for(int i=1; i<=n; i++){
        cout<<j<<" ";
        j++;
        cout<<j<<" ";
        j++;
        cout<<j<<" "<<"PUM"<<endl;
        j+=2;
    }
}