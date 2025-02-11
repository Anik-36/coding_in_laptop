#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    vector<int> v = {10,20,30};
    vector<int> x = {1,2,3};
    v = x; // O(1) when both are same size
    for(int a : v){
        cout<<a<<" ";
    }
}