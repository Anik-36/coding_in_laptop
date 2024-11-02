#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cz = 0 , co  =0;
    for(int i  =0; i<n;i++){
        if(s[i]=='0') cz++;
        else co++;
    }
    cout<<cz<<" "<<co<<endl;
}