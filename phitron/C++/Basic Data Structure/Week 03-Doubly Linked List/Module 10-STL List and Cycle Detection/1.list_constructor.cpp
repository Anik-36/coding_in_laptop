#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    // list<int> myList;
    // list<int> myList(10);
    list<int> myList(10,5);

    // cout<<myList.front()<<endl;
    for(auto it = myList.begin(); it!=myList.end(); it++){
        cout<<*it<<endl;
    }

    // cout<<myList.size()<<endl;
}