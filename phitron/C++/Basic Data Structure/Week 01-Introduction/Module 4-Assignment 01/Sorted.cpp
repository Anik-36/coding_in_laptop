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
        vector<int> a(n);
        bool flag = true;
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        for(int i = 1; i<n; i++){
            if(a[i]<a[i-1]){
                flag = false;
                break;
            }
        }
        if(flag == true) yes
        else no
    }
}