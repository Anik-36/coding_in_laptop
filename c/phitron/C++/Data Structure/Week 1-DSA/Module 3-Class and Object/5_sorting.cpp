#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    // sorting for ascending
    // sort(a,a+n);
    /// sorting for descending
    sort(a,a+n,greater<int>());
    
    for(int i = 0 ; i<n; i++){
        cout<<a[i]<<" ";
    }

}