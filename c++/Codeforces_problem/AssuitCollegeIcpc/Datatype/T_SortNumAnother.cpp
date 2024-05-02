#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void sortt(int a,int b,int c){
    int temp;
    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
    if(a>c){
        temp = a;
        a = c;
        c = temp;
    }
    if(b>c){
        temp = b;
        b = c;
        c = temp;
    }
    cout<<a<<endl<<b<<endl<<c<<endl;
}
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    sortt(a,b,c);
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
}