#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
const ll N = 1e9+10;
int ar[N];
using namespace std;
int main(){
    int t;
    cin>>t;
    int ct = 0;
    for(int i = 1 ; i<=N ; i++){
        for(int  j=i+1 ; j<=N ; j++){
            if((ar[i]>=1 && ar[i]<=9) or (ar[i] == ar[j])){
                ct++;
            }
        }
    }
    while(t--){
        int a;
        cin>>a;
        cout<<ar[a]<<endl;
    }
}