#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string a;
    cin>>a;
    string e = "EGYPT";
    bool flag = false;
    int ct = 0;
    for(int i = 0; i<a.size(); i++){
        if(a[i]=='E'){
            ct++;
            for(int j = i,k = 0; j<i+5,k<5; j++,k++){
                if(a[j]!=e[k]){
                    flag = false;
                    break;
                }else{
                    flag = true;
                }
            }
            if(flag==true){
                a.replace(i,5," ");
                i+=4;
            }
        }
    }
    cout<<a<<endl;
    cout<<ct<<endl;
}