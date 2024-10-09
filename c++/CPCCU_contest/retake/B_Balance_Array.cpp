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
        int a , n = 0 , m = 0;
        cin>>a;
        int c[a] ;
        int b = a/2;
        if(b%2==0){
            yes
            for(int i = 0; i<b; i++){
                c[i] = n+2;
                n+=2;
                m = m + c[i];
                cout<<c[i]<<" ";
            } 
            c[b] = 1;
            cout<<c[b]<<" ";
            m = m -1;
            for(int i = b+1 ; i<a-1; i++){
                c[i] = c[b] + 2;
                c[b] = c[b] + 2;
                m = m - c[b];
                cout<<c[i]<<" ";
            }
            c[a-1] = m;
            cout<<c[a-1] <<endl;
        }else no
    }
}