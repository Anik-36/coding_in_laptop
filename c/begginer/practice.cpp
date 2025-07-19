#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int m = 3;
    for(int i = 1; i<= 3; i++){
        cout<<"i = "<<i<<" ";
        for(int j = 1 ; j<=3; j++){
            if(j == m) break;
            cout<<"j = "<<j<<" ";
        }
        cout<<endl;
    }
}