#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i =1; i<=a; i++){
        if(a%i==0) cout<<i<<endl;
    }
}