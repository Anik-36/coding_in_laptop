#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    ll t, n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        int first=0;
        for(int i=0 ; i<n; i++){
            if(s[i]=='B'){
                first = i;
                break;
            }
        }
        int last = 0;
        for(int j= n-1 ; j>=0; j--){
            if(s[j]=='B'){
                last = j;
                break;
            }
        }
        int count = 0;
        for(int i = first ; i<=last ; i++){
            count++;
        }
        cout<<count<<endl;
    }

}