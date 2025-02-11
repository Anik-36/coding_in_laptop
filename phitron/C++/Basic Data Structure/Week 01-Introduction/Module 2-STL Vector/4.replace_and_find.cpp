#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    vector<int> v = {2,15,3,2,6,7,7,3,2,7,4,3,2};

    // replace
    // replace(v.begin(),v.end(),2,100);
    // for(int x : v){
    //     cout<<x<<" ";
    // }

    // find
    // vector<int> :: iterator it;
    // it = find(v.begin(),v.end(),3);
    // cout<<*it<<endl;

    auto it = find(v.begin(),v.end(),10);
    if(it!=v.end()) cout<<" Found";
    else cout<<" Not Found"<<endl;

}