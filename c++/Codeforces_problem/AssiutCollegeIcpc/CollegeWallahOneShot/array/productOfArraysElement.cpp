#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int arr[] = {3,5,5,2,7,1};
    int product = 1 ;
    int n = sizeof(arr)/4;
    for(int i = 0 ; i<n; i++){
        product*=arr[i];
    }
    cout<<product<<endl;
}