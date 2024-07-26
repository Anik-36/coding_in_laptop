#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
using namespace std;
const int N = 1e7+10;
ll ar[N];
int main(){
    int n , m;
    cin>>n>>m;
    while(m--){
        int a,b,d;
        cin>>a>>b>>d;
        ar[a]+=d;
        ar[b+1]-=d;
    }
    for(int i =1; i<=n; i++){
        ar[i] +=ar[i-1];
    }
    ll mx = -1;
    for(int i = 1; i<=n; i++){
        if(ar[i]>=mx){
            mx = ar[i];
        }
    }
    cout<<mx<<endl;
}

// time complexity =>  O ( m + n + n ) = 2*10^5 + 2*10^7 = 2*10^7

// prefix sum + hash table manipulation