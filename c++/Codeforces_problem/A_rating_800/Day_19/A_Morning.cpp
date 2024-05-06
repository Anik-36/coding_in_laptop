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
        string a;
        cin>>a;
        int cur = 1 , ans = 0, z = 10;
        for(int i = 0 ; i<4; i++){
            if(a[i]=='0'){
                ans = ans + abs(10-cur)+1;
                cur = 10;
            }else{
                ans = ans + abs((a[i]-'0')-cur)+1;
                cur = a[i]-'0';
            }
        }
        cout<<ans<<endl;
    }
}