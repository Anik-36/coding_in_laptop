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
        int a,b,c;
        cin>>a>>b>>c;
        int d = 0;
        int count = a;
        count = count +(b/3);
        int r = b%3;
        if(r>0){
            int n = 3-r;
            if(n>c){
                cout<<"-1"<<endl;
                d++;
            }else{
                c = c-n;
                count++;
            }
        }
        if(d==0){
            count = count +(c/3);
            c = c%3;
            if(c>0){
                count++;
            }
            cout<<count<<endl;
        }
    }
}   