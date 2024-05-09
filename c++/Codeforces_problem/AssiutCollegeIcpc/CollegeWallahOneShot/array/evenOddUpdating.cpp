#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int arr[5] = {2,5,9,6,7};
    for(int i = 0 ; i<5 ; i++){
        if(i%2==0) arr[i]+=10;
        else arr[i]*=2;
    }
    for(int i = 0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
}