#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void print(stringstream & ss){
    string word;
    if(ss>>word){
        print(ss);
        cout<<word<<endl;
    }
}
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    // ss<<s;
    print(ss);
}