#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    list<int> myList = {1,2,3,4,3,6,3,8} ;

    // list<int> list1 = {1,2,3,45};

    // myList = list1;
    // myList.assign(list1.begin(),list1.end());

    // myList.push_back(50);

    // myList.pop_back();
    // myList.pop_back();

    // myList.pop_front();
    // myList.push_front(300);


    // myList.insert(next(myList.begin(),2),2000);

    // myList.insert(next(myList.begin(),3),{100,200,300});

    // list<int> newList = {10,20,30,40};
    // myList.insert(next(myList.begin(),2),newList.begin(),newList.end());


    // vector<int> v = {10,20,30,40};
    // myList.insert(next(myList.begin(),2),v.begin(),v.end());

    // myList.erase(next(myList.begin(),2));

    // myList.erase(next(myList.begin(),2),next(myList.begin(),5));

    // replace(myList.begin(),myList.end(),3,100);

    auto it = find(myList.begin(),myList.end(),4);

    if(it == myList.end()){
        cout<<"Not Found"<<endl;
    }else{
        cout<<"Found"<<endl;
    }
    // cout<<*it<<endl;

    // for(int val: myList){
    //     cout<<val<<endl;
    // }
}