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
        int n,d,r,counto = 0 ,countt = 0;
        cin>>n;
        d = n/3;
        counto = d;
        countt = d;
        r= n%3;
        if(r==1){
            counto++;
        }else if(r==2){
            countt++;
        }
        cout<<counto<<" "<<countt<<endl;
    }
}