#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int mx = INT_MIN;
    int cnt = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        if(a[i]>mx) mx = a[i];
    }
    for(int i = 0; i<n; i++){
        if(a[i]<mx){
            cnt = cnt + (mx-a[i]);
        }
    }
    cout<<cnt<<endl;
}