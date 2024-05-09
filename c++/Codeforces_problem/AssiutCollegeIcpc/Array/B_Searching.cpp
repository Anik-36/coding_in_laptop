#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n, m, count = 0;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i = 0 ; i<n; i++){
        if(a[i]==m){
            cout<<i<<endl;
            count++;
            break;
        }
    }if(count==0) cout<<-1<<endl;
}