#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;
    cin>>t;
    int j = 1;
    while(t--){
        int n;
        cin>>n;
        float a[n];
        float avg = 0;
        for(int i = 0 ; i<n; i++){
            cin>>a[i];
            avg+=a[i];
        }
        avg = avg/n;
        cout<<"Case "<<j<<": "<<fixed<<setprecision(3)<<avg<<endl;
        j++;
    }
}