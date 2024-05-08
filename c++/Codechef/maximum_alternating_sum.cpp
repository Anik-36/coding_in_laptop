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
        int n , temp = 0 , sum = 0; 
        cin>>n;
        int a[n+1];
        for(int i = 1 ; i<=n; i++){
            cin>>a[i];
        }
        for(int i = 1; i<n ; i++){ // 4 3 1 5 3 2 3
            if(i%2!=0){
                if(a[i]<a[i+1]){
                    temp = a[i+1];
                    a[i+1] = a[i];
                    a[i] = temp;
                }
            }
        }
        for(int i = 1 ; i<=n; i++){
            if(i%2!=0){
                sum+=a[i];
            }
        }
        for(int i = 1 ; i<=n; i++){
            if(i%2==0){
                sum-=a[i];
            }
        }
        cout<<sum<<endl;
    }
}