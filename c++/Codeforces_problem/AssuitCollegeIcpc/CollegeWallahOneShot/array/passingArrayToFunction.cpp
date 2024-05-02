#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void change(int x[]){
    x[0] = 4;
}
int main(){
    int arr[3];
    for(int i=0; i<3; i++){
        cin>>arr[i];
    }
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    change(arr);
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
}