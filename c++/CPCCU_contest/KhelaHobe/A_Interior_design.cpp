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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int c1 = a+b;
        int c2 = c+d;

        if(c1>=c2) cout<<c2<<endl;
        else cout<<c1<<endl;
    }
}