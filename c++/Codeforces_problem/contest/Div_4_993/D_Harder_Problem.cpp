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
        int f[n+10] = {0};
        int ct = 0 , h = INT_MIN;
        for(int i = 0 ; i<n; i++){
            cin>>a[i];
            f[a[i]]++;
        }
        for(int i = 1 ; i<=n; i++){
            h = max(h,f[i]);
        }
        for(int i = 1 ; i<=n; i++){
            if(f[i]==h){
                ct++;
            }
        }
        if(ct>1){
            for(int i = 1; i<=n; i++){
                if(f[i]==h){
                    f[i]--;
                }
            }
            while(ct--){
                for(int i = 1; i<=n; i++){
                    if(f[i]==0){
                        f[i]++;
                        i=n+1;
                    }
                }
            }
        }else{
            for(int i = 1; i<=n; i++){
                if(f[i]==h){
                    f[i]--;
                }
                if(f[i]==0){
                    f[i]++;
                    break;
                }
            }
        }
        for(int i = 1; i<=n; i++){
            while(f[i]--){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}