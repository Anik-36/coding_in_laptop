#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int arr[] = {3,5,5,2,7,1};
    int n = sizeof(arr)/4;
    int b[n] ;
    for(int i = 0 ; i<n; i++){
        b[i] = arr[n-1-i];
        cout<<b[i]<<" ";
    }
}