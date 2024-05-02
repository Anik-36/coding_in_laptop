#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;
    int a,b,c;
    cin>>t;
    while(t--){
        int h , l;
        cin>>a>>b>>c;
        // if(a>b && a>c){
        //     h= a;
        // }else if( b>a && b>c){
        //     h = b;
        // }else if(c>a && c>b) {
        //     h = c;
        // }
        // if(a<b && a<c){
        //     l =a;
        // }else if(b<a && b<c){
        //     l = b;
        // }else if(c<a && c<b){
        //     l = c;
        // }
        // if(a>l && a<h) cout<<a<<endl;
        // if(b>l && b<h) cout<<b<<endl;
        // if(c>l && c<h) cout<<c<<endl;
        if((a>b && a<c) or (a<b && a>c)) cout<<a<<endl;
        else if((b>a && b<c) or (b<a && b>c)) cout<<b<<endl;
        else cout<<c<<endl;
    }
}