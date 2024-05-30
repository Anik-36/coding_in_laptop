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
        int n , ct = 0;
        cin>>n;
        string a;
        cin>>a;
        for(int i = 0 ; i<n-1; i++){
            if(a[i]>='0' && a[i]<='9'){
                if(a[i+1]>='0' && a[i+1]<='9'&& a[i]>a[i+1]){
                    ct++;
                }
            }else if(a[i]>='a' && a[i]<='z'){
                if(a[i+1]>='0' && a[i+1]<='9'){
                    ct++;
                }else if(a[i+1]<a[i]){
                    ct++;
                }
            }
        }
        if(ct!=0){
            no
        }else yes
    }
}