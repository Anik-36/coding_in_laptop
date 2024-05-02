#include<bits/stdc++.h>
using namespace std;
int main(){
    char a, c;
    int b;
    cin>>a;
    b= int(a);
    if(b>=65 && b<=90){
        b-=64;
        b+=96;
        c = char(b);
        cout<<c<<endl;
    }else if(b>=97 && b<=122){
        b-=96;
        b+=64;
        c = char(b);
        cout<<c<<endl;
    }
}