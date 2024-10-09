#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int a[5][5];
    int m =0 , n=0;
    for(int i  = 0 ; i<5 ; i++){
        for(int j = 0 ; j<5 ; j++){
            cin>>a[i][j];
            // if(a[i][j]==1){
            //     m = i;
            //     n = j;
            // }
        }
    }
    for(int i  = 0 ; i<5 ; i++){
        for(int j = 0 ; j<5 ; j++){
            if(a[i][j]==1){
                m = i;
                n = j;
                //break;
            }
        }
    }
    // m = abs(2-m);
    // n = abs(2-n);
    int r = abs(2-m)+ abs(2-n);
    cout<<r<<endl;
}