#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    bool flag = false;
    int l = 0;
    int r = n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==x){
            flag = true;
            break;
        }else if(a[mid]<x){
            l = mid+1;
        }else{
            r = mid-1;
        }
    }
    if(flag == true) yes
    else no;
}