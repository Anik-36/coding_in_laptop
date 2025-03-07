#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    list<int> mylist;
    while(true){
        int val;
        cin>>val;
        if(val == -1) break;
        mylist.push_back(val);
    }
    mylist.sort();
    mylist.unique();
    for(int v : mylist){
        cout<<v<<" ";
    }
}