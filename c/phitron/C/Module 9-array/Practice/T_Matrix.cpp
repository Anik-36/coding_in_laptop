#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n, pd = 0, sd = 0;
    cin>>n;
    int a[n][n];
    for(int i = 0; i<n; i++){
        for(int  j= 0 ; j<n; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int  j= 0 ; j<n; j++){
            if(i==j){
                pd+=a[i][j];
            }
            if((i+j)==n-1){
                sd +=a[i][j];
            }
        }
    }

    int r = abs(pd-sd);
    cout<<r<<endl;
    
}