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
        int a[n];
        int cte = 0, cto = 0;
        for(int i = 0; i<n; i++){
            cin>>a[i];
            if(a[i]%2==0) cte++;
            else cto++;
        }
        int ans = 0;
        if(n%2!=0) cout<<"-1"<<endl;
        else{
            n/=2;
            if(cte>n){
                ans =cte-n;
            }else if(cto>n){
                ans = cto-n;
            }else{
                ans = 0;
            }
            cout<<ans<<endl;
        }
    }
}