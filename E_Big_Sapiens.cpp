#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(n){
        if(5*i<n){
            i++;
        }else{
            n = 0;
        }
    }
    cout<<i<<endl;
    
}