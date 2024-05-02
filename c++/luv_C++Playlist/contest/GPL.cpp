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
        int n;
        cin>>n;
        int a;
        int count = 0;
        int num = 0 ;
        int ans = 0;
        cin>>a;
        num = a;
        while(num!=0){
            int d = num%10;
            ans = ans + d*pow(2,count);
            num = num/10;
            count++;
        }
        cout<<ans<<endl;
    }
}