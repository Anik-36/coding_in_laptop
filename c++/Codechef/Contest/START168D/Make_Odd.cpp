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
        int s = 0, v = 0;
        string a,b;
        cin>>a>>b;
        for(int i = 0 ; i<n; i++){
            if(a[i]=='1' and b[i]=='1'){
                s++;
            }else if(a[i]=='0' and b[i]=='1'){
                v++;
            }else if(b[i]=='0' and a[i]=='1'){
                v++;
            }else{
                s = s;
            }
        }
        if(s%2!=0){
            yes
        }else{
            if(v>0){
                yes
            }else no
        }
    }
}