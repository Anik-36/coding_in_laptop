#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    int b;
    cin>>a;
    b= int(a);
    if((b>=65 && b<=90) || (b>=97 && b<=122)){
        cout<<"ALPHA"<<endl;
        if(b>=65 && b<=90){
            cout<<"IS CAPITAL"<<endl;
        }else if(b>=97 && b<=122){
            cout<<"IS SMALL"<<endl;
        }
    }else if(b>=48 && b<=57){
        cout<<"IS DIGIT"<<endl;
    }
}