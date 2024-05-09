#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    char s;
    cin>>a>>s>>b;
    if(a<b){
        if(s=='<') cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
    }else if(a>b){
        if(s=='>') cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
    }else if(s=='=') cout<<"Right"<<endl;
          else cout<<"Wrong"<<endl;  
}