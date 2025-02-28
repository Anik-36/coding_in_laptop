#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    list<int> myList = {40,20,10,30,50,10,10};

    // myList.remove(10);

    // myList.sort();
    // myList.sort(greater<int>());

    // myList.sort();
    // myList.unique(); // must use sort function before

    myList.reverse();
    for(int val:myList){
        cout<<val<<endl;
    }
}