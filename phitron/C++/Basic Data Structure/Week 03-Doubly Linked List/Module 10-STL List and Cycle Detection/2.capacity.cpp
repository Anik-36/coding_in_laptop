#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    list<int> myList = {10,20,30};

    // myList.clear();
    // myList.resize(2);
    myList.resize(2);
    myList.resize(5,100);
    // cout<<myList.empty();

    cout<<myList.size()<<endl;
    for(int val:myList){
        cout<<val<<endl;
    }
    // cout<<myList.max_size()<<endl;
}