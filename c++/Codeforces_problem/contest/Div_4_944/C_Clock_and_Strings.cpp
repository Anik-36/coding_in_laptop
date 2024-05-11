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
        int a,b,c,d, temp , temp2;
        cin>>a>>b>>c>>d;   
        if(a>b){
            temp = b;
            b = a;
            a = temp;
        }
        if(c>d){
            temp = d;
            d = c;
            c = temp;
        }
        if(c<a){
            temp = c;
            c = a;
            a = temp;
            temp2  = d;
            d = b;
            b = temp2;

        }
        if(a<c && b>c && a<d && b<d) yes
        else no
    }
}