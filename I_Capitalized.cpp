#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string a;
    cin>>a;
    if(a[0]<='z'){
        //a[0]= a[0]+32;
        a[0] = toupper(a[0]);
    }
    cout<<a<<endl;
}