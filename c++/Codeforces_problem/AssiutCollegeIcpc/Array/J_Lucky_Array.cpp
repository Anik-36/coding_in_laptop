#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
const int N = 1e5+1;
int f[N] ;
using namespace std;
int main(){
    int n , mn = INT_MAX, result , ct = 0;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    mn = *min_element(a,a+n);
    for( int  i  = 0 ; i<n ; i++){
        if(a[i]==mn) ct++;
    }
    if(ct%2!=0)  cout<<"Lucky"<<endl;
    else cout<<"Unlucky"<<endl;

}