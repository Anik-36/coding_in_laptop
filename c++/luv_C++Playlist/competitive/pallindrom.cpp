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
        int n, q;
        cin>>n>>q;
        string s;
        cin>>s;
        while(q--){
            int l , r;
            cin>>l>>r;
            int hsh[26] = {0};
            l--; r--;
            for(int i = l; i<=r; i++){
                hsh[s[i] - 'a']++;
            }
            int oddCt = 0;
            for(int i = 0; i<26; i++){
                if(hsh[i] % 2 != 0) oddCt++;
            }
            if(oddCt>1) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}