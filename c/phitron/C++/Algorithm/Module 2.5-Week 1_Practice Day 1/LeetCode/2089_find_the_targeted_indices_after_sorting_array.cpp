#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int ans ;
    int target;
    cin>>target;
    sort(a,a+n);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    int b[]={};
    int l = 0;
    int u = n-1;
    while(l<u){
        int m = (l+u)/2;
        if(a[m]>target){
            u = m;
        }else if(a[m]<target){
            l = m+1;
        }else{
            l = m;
        }
        ans = l;
    }
    if(a[l]==target){
        for(int i = 0, j = l; a[j]==target; j++,i++){
            b[i] = j;
        }
    }
    for(int i = 0; i<sizeof(b)/sizeof(b[0]); i++){
        cout<<b[i]<<" ";
    }
}