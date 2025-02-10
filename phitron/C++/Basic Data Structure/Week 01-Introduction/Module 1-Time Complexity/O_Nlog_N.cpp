#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i<=n; i++){  // O(N)
        int x = i;
        while(x>0){  // O(log(N))
            int d = x%10;
            cout<<d<<" ";
            x/=10;
        }
        cout<<endl;
    }
}

// total complexity = O(Nlog(N))