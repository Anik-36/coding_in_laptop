#include<bits/stdc++.h>
#define endl '\n' 
using namespace std;
int main(){
    int n, m, mx = INT_MIN;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m;
        mx = max(mx,m);
    }
    cout<<mx<<endl;
}