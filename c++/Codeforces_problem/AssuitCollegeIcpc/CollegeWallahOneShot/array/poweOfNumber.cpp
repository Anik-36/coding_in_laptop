#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        arr[i] = (i+1)*(i+1);
        cout<<arr[i]<<" ";
    }
}