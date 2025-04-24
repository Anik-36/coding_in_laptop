#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    vector<int> v = {50,40,45,20,25,41,42,8,9,10};
    int x;
    cin>>x;
    v.push_back(x);
    int cur_idx = v.size()-1;
    int par_idx = (cur_idx -1)/2;
    while(cur_idx != 0){
        int par_idx = (cur_idx -1)/2;
        if(v[cur_idx] > v[par_idx]){
            swap(v[cur_idx],v[par_idx]);
            cur_idx = par_idx;
        }else{
            break;
        }
    }
    for( int val : v) cout<<val<<" ";
}