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
        int a,b , sum = 0;
        cin>>a>>b;
        int ct = b-1;
        for(int i = b ; i>=1; i--){
            sum = sum + b;
            b = b-1;
        }
        sum = ct + sum;
        if(sum<=a) yes
        else no
    }
}