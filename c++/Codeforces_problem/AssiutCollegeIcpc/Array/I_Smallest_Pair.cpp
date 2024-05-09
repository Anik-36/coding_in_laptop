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
        int n ;
        int new_sum = INT_MAX;
        cin>>n;
        int a[n];
        for(int i = 0 ; i < n ; i++){
            cin>>a[i];
        }
        for(int i = 0 ; i < n - 1 ; i++){
            for(int j = i+1 ; j<n; j++){
                int sum = 0;
                sum = sum + a[i] + a[j] + j - i;
                if(sum<new_sum){
                    new_sum = sum;
                }
            }
        }
        cout<<new_sum<<endl;
    }
}