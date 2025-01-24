#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss;
    ss<<s;
    string word;
    while(ss>>word){
        cout<<word<<endl;
    }
}