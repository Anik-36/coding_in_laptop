#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void prime(int a){
    if(a==0 or a==1) {
        cout<<"NO"<<endl; 
        return;
    }
    else{
        for(int i =2; i<a; i++){ 
            if(a%i==0){ 
                cout<<"NO"<<endl;
                return ;
            }
        } cout<<"YES"<<endl;
    }
}
int main(){
    int n, flag = 0;
    cin>>n;
    prime(n);
    // if(n==0 or n==1) flag =1;
    // for(int i=2; i<n; i++){
    //     if(n%i==0){
    //         flag =1;
    //         break;
    //     }
    // }
    // if(flag ==0) yes
    // else no
    
}