#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    list<int> myList = {40,28,10,30,50,10,10};

    myList.remove(10);
    for(int val:myList){
        cout<<val<<endl;
    }
}