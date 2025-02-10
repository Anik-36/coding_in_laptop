#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        int r = n%10;
        cout<<r<<endl;
        n/=10;  // O(logN)
    }
}