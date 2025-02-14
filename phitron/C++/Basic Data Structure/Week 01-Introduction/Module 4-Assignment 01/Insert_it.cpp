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
    int m;
    cin>>m;
    vector<int> b(m);
    for(int i = 0; i<m; i++){
        cin>>b[i];
    }
    int x;
    cin>>x;
    a.insert(a.begin()+x,b.begin(),b.end());
    for(int i = 0 ; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}