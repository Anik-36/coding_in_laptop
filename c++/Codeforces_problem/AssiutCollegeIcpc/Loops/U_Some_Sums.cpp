#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n, a,b,r, sum = 0, ans = 0;
    cin>>n>>a>>b;
    for(int i=a; i<=n; i++){
        int q = i;
        while(q!=0){
            r = q%10;
            q/=10;
            sum = sum + r;
        }
        if(sum >= a && sum<=b){
            ans = ans + i;
        }sum = 0;
    }
    cout<<ans<<endl;

}