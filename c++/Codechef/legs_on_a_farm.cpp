#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
   
    while(t--){
        int ct =0 ;
        int n;
        cin>>n;
        if(n>2){
            ct = n/4;
            if(n%4>0){
                ct++;
            }
            cout<<ct<<endl;
        }else {
            cout<<"1"<<endl;
        }
    }

}
