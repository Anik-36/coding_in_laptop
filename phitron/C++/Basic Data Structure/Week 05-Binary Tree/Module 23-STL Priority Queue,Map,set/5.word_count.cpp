#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string sentence;
    getline(cin,sentence);
    string word;
    stringstream ss(sentence);
    map<string,int> mp;
    while(ss>>word){
        // cout<<word<<endl;
        mp[word]++;
    }

    for(auto it = mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<mp["cricket"]<<endl;





}