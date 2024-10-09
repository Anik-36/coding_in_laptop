#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    int sum = 0;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum==0) cout<<"EASY"<<endl;
    else cout<<"HARD"<<endl;
}