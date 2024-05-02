#include<bits/stdc++.h>
using namespace std;
int main(){
    int a ,b, c, r;
    char s , q;
    cin>>a>>s>>b>>q>>c;
    if(s=='+'){
        r = a+b;
        if(r==c) cout<<"Yes"<<endl;
        else cout<<a+b<<endl;
    }else if(s=='-'){
        r = a-b;
        if(r==c) cout<<"Yes"<<endl;
        else cout<<a-b<<endl;
    }else if(s=='*'){
        r = a*b;
        if(r==c) cout<<"Yes"<<endl;
        else cout<<a*b<<endl;
    }
}