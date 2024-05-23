#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>0 && b>0) cout<<"1"<<endl;
    else if(a>0 && b<0) cout<<"4"<<endl;
    else if(a<0 && b<0) cout<<"3"<<endl;
    else if(a<0 && b>0) cout<<"2"<<endl;
    else cout<<"0"<<endl;

}