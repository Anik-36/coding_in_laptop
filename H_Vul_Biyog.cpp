#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n , t;
    cin>>n>>t;
    while(t--){
        if((n%10)>0){
            n = n-1;
        }else{
            n= n/10;
        }
    }
    cout<<n<<endl;
    
}