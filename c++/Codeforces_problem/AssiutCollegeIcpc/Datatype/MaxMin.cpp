#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c; 
    cin>>a>>b>>c;
    // cout<<fmax(a,b)<<endl;
    // cout<<fmin(a,b)<<endl;
    //Finding the Minimum value 
    if(a<b){
        if(a<c){
            cout<<a<<" ";
        }else cout<<c<<" ";
    }else if(b<c){
        cout<<b<<" ";
    }else cout<<c<<" ";
    // Finding the Maximum value
    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }else cout<<c<<endl;
    }else if(b>c){
        cout<<b<<endl;
    }else cout<<c<<endl;
}