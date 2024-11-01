#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    int * a = new int[n];
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i = 0 ; i<n; i++){
        b[i] = a[i];
    }
    delete[] a;
    for(int i = n; i<m; i++){
        cin>>b[i];
    }
    for(int i = 0 ;i<m; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    // so the array is deleted from dynamic storage
    for(int i = 0 ;i<n; i++){
        cout<<a[i]<<" ";
    }


}