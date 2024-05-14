#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
        int n;
        int mn = INT_MAX; 
        int mx = INT_MIN;
        int in = -1 , ix = -1;
        cin>>n;
        int a[n];
        for(int i = 0 ; i<n; i++){
            cin>>a[i];
            if(a[i]<mn){
                mn = a[i];
                in = i;
            }
            if(a[i]>mx){
                mx = a[i];
                ix = i;
            }
        }
        int temp = a[in];
        a[in] = a[ix];
        a[ix] = temp;
        for(int i = 0 ; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl; 
}