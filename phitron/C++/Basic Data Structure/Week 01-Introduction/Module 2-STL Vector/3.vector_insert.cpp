#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    vector<int> v = {10,20,30,40};
    // v.insert(v.begin()+2,100);
    vector<int> x = {101,102,103,104,105};
    v.insert(v.begin()+2,x.begin(),x.end()-1);
    for(int x: v){
        cout<<x<<" ";
    }
}