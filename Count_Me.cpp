#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        int mx = INT_MIN;
        string sentence;
        getline(cin,sentence);
        map<string,int> mp;
        string word;
        stringstream ss(sentence);
        while(ss>>word){
            mp[word]++;
            if(mp[word]>mx) mx = mp[word];

        }
        for(auto it = mp.begin(); it!=mp.end(); it++){
            // if(it->second == mx){
            //     cout<<it->first<<" "<<it->second<<endl;
            //     break;
            // }
            cout<<it->first<<" "<<it->second<<endl;
        }
    }
}