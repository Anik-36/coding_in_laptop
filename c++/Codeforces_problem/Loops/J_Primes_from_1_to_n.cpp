#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
bool prime(int a){
    if(a==0 or a==1){
        return false;
    }
    for(int i=2; i<a; i++){
        if(a%i==0){
            return false;
        }
    }return true;
}
int main(){
    int n;
    cin>>n;
    for(int i=2; i<=n; i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
    
}