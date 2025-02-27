#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    // list<int> myList;
    // list<int> myList(10);
    // list<int> myList(10,100);

    // list<int> list2 = {1,2,3,4,5};
    // list<int> myList(list2);

    int a[5] = {10,20,30,40,50};
    list<int> myList(a,a+5);

    // cout<<myList.front()<<endl;
    // for(auto it = myList.begin(); it!=myList.end(); it++){
    //     cout<<*it<<endl;
    // }

    for(int val:myList){
        cout<<val<<endl;
    }
    // cout<<myList.size()<<endl;
}