#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // int a = 1;
        // int b = n-a;
        int ct = 0;
        // while((a+b)==n){
        //     ct++;
        //     a++;
        //     b--;
        //}
        for(int  a= 1, b = n-a; (a+b)==n; a++,b--){
            if(a>n-1 or b<1) break;
            ct++;

        }
        cout<<ct<<endl;
    }
}