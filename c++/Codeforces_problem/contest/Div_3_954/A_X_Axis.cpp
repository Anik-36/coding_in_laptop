#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z , mn = INT_MAX;
        int a[11];
        cin>>x>>y>>z;
        for(int i = 1; i<=10; i++){
            a[i] = abs(x-i) + abs(y-i) + abs(z-i);
            if(a[i]<mn){
                mn = a[i];
            }
        }
        cout<<mn<<endl;
    }
}