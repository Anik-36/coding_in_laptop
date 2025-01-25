#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string t = s;
    stringstream ss(s);
    stringstream b(t);
    string word;
    string count;
    int ct = 0;
    int n = 0;
    while(b>>count){
        ct++;
    }
    while(ss>>word){
        string :: iterator i;
        for( i = word.end()-1; i>=word.begin(); i--){
            cout<<*i;
        }
        n++;
        if(n<ct){
            cout<<" ";
        }
    }
}