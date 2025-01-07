#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string s;
    int n, x;
    cin>>s;
    cin>>n;
    while(n!=0){
        cin>>x;
        for(int i=0 ; i<x; i++){
            cout<<s;
        }
        n--;
        cout<<endl;
    }

}