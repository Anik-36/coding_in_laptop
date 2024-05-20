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
        int a,b , ct = 0 , e = 0 ,c = 0, g , s;
        cin>>a>>b;
        if(b!=0){
            c = b/2;
            if(b%2>0){
                c++;
            }
            s = c*15;
            g = b*4;
            g+=a;
            if(g>s){
                c++;
            }
        }
        else{
            c = a/15;
            if(a%15>0){
                c++;
            }
        }
        cout<<c<<endl;
    }
}