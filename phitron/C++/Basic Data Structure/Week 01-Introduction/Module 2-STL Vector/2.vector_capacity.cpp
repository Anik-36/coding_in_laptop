#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    vector<int>v;
    // cout<<v.max_size()<<endl;

    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    // v.push_back(20);
    // cout<<v.capacity()<<endl;
    // v.push_back(30);
    // cout<<v.capacity()<<endl;
    // v.push_back(40);
    // cout<<v.capacity()<<endl;
    // v.push_back(50);
    // cout<<v.capacity()<<endl;
    // capacity will increase the size with multiple by 2.

    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // v.clear(); // it will jus t remove the size but not the value.
    // cout<<v[2]<<endl;
    // cout<<v.size()<<endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.resize(2);
    // v.resize(7);
    v.resize(7,5);
    cout<<v.size()<<endl;
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}