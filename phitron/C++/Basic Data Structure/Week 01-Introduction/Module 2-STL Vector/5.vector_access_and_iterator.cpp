#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    vector<int> v = {10,20,30,40,50};
    // vector<int> :: iterator it;
    
    // cout<<v[v.size()-1]<<endl;
    // cout<<v.back()<<endl;
    // cout<<v[0]<<endl;
    // cout<<v.front()<<endl;

    for(auto it = v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
    }
}