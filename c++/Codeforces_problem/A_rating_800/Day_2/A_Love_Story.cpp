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
        int count = 0;
        string s , d = "codeforces";
        cin>>s;
        for(int i=0 ; i<10 ; i++){
            if(s[i] != d[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}