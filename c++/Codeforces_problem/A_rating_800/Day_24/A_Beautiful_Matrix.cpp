#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int a[5][5];
    int ct = 0;
    int m = 0 , n  = 0;
    for(int i = 0 ; i<5 ; i++){
        for(int j = 0 ; j<5 ; j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                m = i;
                n = j;
            }
        }
    }
    ct = abs(m-2) + abs(n-2);
    cout<<ct<<endl;
}