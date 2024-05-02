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
        int n , r = 0;
        vector<int> ans;
        cin>>n;
        int power = 1;
        while(n>0){
            r = n%10;
            if(r>0){
                r = r*power;
                ans.push_back(r);
            }
            n/=10;
            power*=10;
        }
        cout<<ans.size()<<endl;
        for(auto i : ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}