#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5};
    // v.erase(v.begin()+2,v.begin()+5);
    v.erase(v.begin()+2,v.end()-1);
    for(int x : v){
        cout<<x<<" ";
    }
}