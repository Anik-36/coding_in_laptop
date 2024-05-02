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
        int n , counte = 0 ,counto = 0 ;
        cin>>n;
        int a[2*n];
        for(int i = 0 ; i<2*n; i++){
            cin>>a[i];
            if(a[i]%2!=0){
                counto++;
            }else{
                counte++;
            }
        }if(counto==counte) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}