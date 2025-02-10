#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    // for(int i = 1; i<=sqrt(n); i++){  // O(sqrt(N))
    //     if(n%i==0){
    //         cout<<i<<" ";
    //         if(n/i!=i) cout<<n/i<<endl;
    //     }

    // }

    for(int i = 1; i*i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
            if(n/i!=i) cout<<n/i<<endl;
        }

    }
}