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
        int r;
        cin>>r;
        if(r>=1900) cout<<"Division 1"<<endl;
        else if(r>=1600 and r<=1899) cout<<"Division 2"<<endl;
        else if(r>=1400 and r<=1599) cout<<"Division 3"<<endl;
        else cout<<"Division 4"<<endl;
    }
}