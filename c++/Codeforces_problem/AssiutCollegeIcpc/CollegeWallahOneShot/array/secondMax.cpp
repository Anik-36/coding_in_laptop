#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int arr[] = {3,5,6,2,7,1};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;
    for(int i = 0 ; i<n; i++){
        if(mx<arr[i]) mx = arr[i];
    }
    cout<<mx<<endl;
    int smx = INT_MIN;
    for(int i = 0 ; i<n; i++){
        if(smx<arr[i]){
            if(arr[i]!=mx) smx = arr[i];
        }
    }
    cout<<smx<<endl;
}