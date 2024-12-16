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
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int s = 0 ;
        if(a<=m){
            s+=a;
        }else{
            s+=m;
        }
        if(b<=m){
            s+=b;
        }else{
            //b = b-m;
            s+=m;
        }
        if(((m*2)-s)>=c){
            s+=c;
        }else{
            s+=((m*2)-s);
        }
        cout<<s<<endl;
    }
}