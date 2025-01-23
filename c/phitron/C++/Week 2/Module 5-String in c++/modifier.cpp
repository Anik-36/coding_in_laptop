#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string a = "Hello";
    string b = "World";
    // a= a+b;
    // a.append(b);
    // a = "HelloA"; // it works
    // a = a+"A"; // it works
    a.push_back('A');
    a.pop_back();
    a.pop_back();
    cout<<a<<endl;
    // cout<<b<<endl;
}