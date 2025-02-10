#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string b = "Ratul";
    string word;
    bool flag = false;
    while(ss>>word){
        if(word==b){
            flag = true;
            break;
        }else{
            flag = false;
        }
    }
    if(flag == true){
        yes
    }else no
}