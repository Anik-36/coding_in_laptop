#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    // string a = "Hello";
    // string b = "World";
    // a= a+b;
    // a.append(b);
    // a = "HelloA"; // it works
    // a = a+"A"; // it works
    // a.push_back('A');
    // a.pop_back();
    // a.pop_back();
    // cout<<a<<endl;
    // cout<<b<<endl;

    // a = "Gelo";
    // a.assign("Gelo");
    // cout<<a<<endl;

    string a = "HelloWorld";
    // a.erase(4); // it will erase from the given index till the end
    // a.erase(4,1); // it will erase the amount of character given from the index
    // a.replace(4,1,"so"); // replace = erase + replace . replace(index,amount,"string_you_insert");
    a.replace(5,0,"so"); // replace = erase + replace if amount value is greater then 0
    // a.insert(5,"Anik"); // similar to replace(5,0,"Anik");
    cout<<a<<endl;
}