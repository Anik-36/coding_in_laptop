#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int a[5][4];
    int sum = 0;
    for(int i = 0 ; i<5; i++){
        for(int j=0 ; j<4; j++){
            cin>>a[i][j];
        }
    }
    for(int j = 0 ; j<4; j++){
        for(int i=0 ; i<5; i++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
}