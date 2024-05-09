#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,r;
   char s;
   cin>>a>>s>>b;
   if(s=='+'){
    r = a+b;
   }else if(s=='-'){
    r = a - b;
   }else if(s=='*'){
    r = a * b;
   }else if(s=='/'){
    r = a / b;
   }
   cout<<r<<endl;
}