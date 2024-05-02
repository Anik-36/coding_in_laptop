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
        int a;
        cin>>a;
        cout<<"Division ";
        if(a<1400) cout<<"4"<<endl;
        else if(a>=1400 && a<=1599) cout<<"3"<<endl;
        else if(a>=1600 && a<=1899) cout<<"2"<<endl;
        else cout<<"1"<<endl;
    }
}