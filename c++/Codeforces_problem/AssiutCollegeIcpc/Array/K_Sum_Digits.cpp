#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n , sum = 0 , m;
    cin>>n;
    string a;
    cin>>a;
    for(int i = 0 ; i<n; i++){
        m = int(a[i])-'0';
        sum = sum + m;
    }
    cout<<sum<<endl;
}