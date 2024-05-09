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
    for(int i = 1 ; i<5; i++){
        for(int j=1 ; j<3; j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
    for(int i = 1 ; i<5; i++){
        for(int j=1 ; j<3; j++){
            sum+=a[i][j];
        }
    }cout<<sum<<endl;
}