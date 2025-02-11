#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
vector<int> concat(vector<int> &a, vector<int> &b, int n){
    for(int i = 0; i<n; i++){
        b.push_back(a[i]);
    }
    return b;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i= 0; i<n; i++){
        cin>>a[i];
    }
    vector<int> b(n);
    for(int i= 0; i<n; i++){
        cin>>b[i];
    }
    concat(a,b,n);

    for(int i = 0; i<b.size(); i++){
        cout<<b[i]<<" ";
    }

}