#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int arr[] = {3,5,5,2,7,1};
    int n = sizeof(arr)/4;
    int mx = arr[0];
    for(int i = 1 ; i<n; i++){
        if(mx<arr[i]) mx = arr[i];
    }
    cout<<mx<<endl;
}