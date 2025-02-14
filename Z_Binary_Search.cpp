#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    while(q--){
        int x;
        cin>>x;
        bool flag = false;
        int l = 0, r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid] == x){
                flag = true;
                break;
            }else if(a[mid]>x){
                r = mid - 1;
            }else{
                l = mid+1;
            }
        }
        if(flag == true){
            cout<<"found"<<endl;
        }else cout<<"not found"<<endl;
    }
}