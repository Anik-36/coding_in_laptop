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
        int ct = 0;
        int a[n];
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        cout<<"1 ";
        for(int i = 1; i<n; i++){
            for(int j = 0; j<i; j++){
                if(a[j]>=a[i]){
                    ct++;
                }
            }
            if(ct>0){
                cout<<"0 ";
            }else cout<<"1 ";
            ct = 0;
        }
        cout<<endl;
    }
}