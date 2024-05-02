#include<bits/stdc++.h>
using namespace std;
int main(){
   int a, remainder, q=1;
    cin>>a;
    while(a!=0){
        remainder = a%10;
        a/=10;
    }
    if(remainder%2==0){
        cout<<"EVEN"<<endl;
    }else cout<<"ODD"<<endl;
}