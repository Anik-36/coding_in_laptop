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
    sort(a.begin(),a.end());
    bool flag = false;
    for(int i = 0; i<n-1; i++){
        if(a[i]==a[i+1]){
            flag = true;
            break;
        }
    }
    if(flag == true) yes
    else no
}