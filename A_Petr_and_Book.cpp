#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n, s = 0 , j=0;
    cin>>n;
    int a[7];
    for(int i = 0; i<7; i++){
        cin>>a[i];
    }
    for(int i = 0; i<7; i++){
        s+=a[i];
        if(s>=n){
            j = j+i+1;
            break;
        }
        if(i==6){
            if(s<n){
                i=-1;
            }
        }
    }
    cout<<j<<endl;
    
}