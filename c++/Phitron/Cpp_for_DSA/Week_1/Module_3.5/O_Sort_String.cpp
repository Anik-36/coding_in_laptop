#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n; 
    cin>>n;
    char c;
    int f[26] = {0};
    while(cin>>c){
        f[c-'a']++;
    }
    for(int i = 0 ; i<26; i++){
        while(f[i]>0){
            cout<<char(i+'a');
            f[i]--;
        }
    }





    // string s;
    // cin>>s;
    // int f[26]={0};
    // for(int i = 0; i<n; i++){
    //     f[s[i]-'a']++;
    // }
    // for(int i = 0; i<26; i++){
    //     if(f[i]>0){
    //         while(f[i]--){
    //             cout<<(char)(i+'a');
    //         }
    //     }
    // }
    // cout<<endl;

    //sort(s.begin(),s.end());
    //cout<<s<<endl;
}