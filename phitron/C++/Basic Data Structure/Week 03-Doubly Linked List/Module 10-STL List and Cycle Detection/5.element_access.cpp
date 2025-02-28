#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    list<int> myList = {10,20,30,40,50,60};

    // cout<<myList.front()<<endl;
    // cout<<myList.back()<<endl;

    cout<< *next(myList.begin(),2); // next function gives iterator, it must be derefferenced
}