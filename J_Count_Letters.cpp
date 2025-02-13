#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    vector<int>f(26,0);
    for(int i = 0; i<n; i++){
        f[s[i]-'a']++;
    }
    for(int i = 0; i<26; i++){
        if(f[i]>0){
            cout<<(char)(i+'a')<<" : "<<f[i]<<endl;
        }
    }
}