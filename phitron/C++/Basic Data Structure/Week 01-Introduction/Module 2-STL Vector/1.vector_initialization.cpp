#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    // vector<int> v; type 1

    // vector<int>v(5);  type 2

    // vector<int>v(5,10);  type 3

    // vector<int> v2(5,100);  type 4
    // vector<int>v(v2);  type 4

    // int a[6] = {1,2,3,4,5,6};  type 5
    // vector<int>v(a,a+6);  type 5

    vector<int>v = {2,5,4};

    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
}