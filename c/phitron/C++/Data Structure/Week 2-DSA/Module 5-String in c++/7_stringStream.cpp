#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // stringstream ss(s); // if you want to initialize the stream
    stringstream ss;
    ss<<s; // if you 1st declare a group and then append the string into the group.
    string word;

    while(ss>>word){
        cout<<word<<endl;
    }
}