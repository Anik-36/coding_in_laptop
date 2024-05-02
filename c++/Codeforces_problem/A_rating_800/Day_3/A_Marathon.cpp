#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[4];
        int count = 0 ;
        for(int i=0 ;i<4; i++){
            cin>>a[i];
        }
        for(int i=1 ;i<4; i++){
            if(a[i]>a[0]) count++;
        }
        cout<<count<<endl;
    }
}