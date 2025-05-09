#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        int t;cin>>t;
        int a[t],b[t];
        for(int i = 0; i<t; i++){
            cin>>a[i]>>b[i];
        }
        bool flag = true;
        for(int i = 1 ; i<t; i++){
            if(b[i]>=b[0]){
                if(a[i]>=a[0]){
                    flag = false;
                    break;
                }
            }
        }
        if(flag == false){
            cout<<"-1"<<endl;
        }else{
            cout<<a[0]<<endl;
        }

    }
}