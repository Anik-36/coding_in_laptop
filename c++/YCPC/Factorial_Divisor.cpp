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
        double n,d;
        cin>>n>>d;
        double f = 1;
        for(int i=n; i>=1;i--){
            f*=i;
        }
        cout<<f<<endl;
        double v = f/d;
        cout<<v<<endl;
        //if(f%d==0) cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}