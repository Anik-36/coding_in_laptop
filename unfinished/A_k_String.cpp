#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n , ok = 0;
    cin>>n;
    string s;
    cin>>s;
    int a[26] = {0};
    for(int  i = 0; i<s.size(); i++){
        a[s[i]-'a']++;
        
    }
    for(int  i = 0; i<s.size(); i++){  
        if(a[s[i]-'a']%n==0){
            ok++;
        }else{
            ok = 0;
        }
        
    }
    string b="";
    if(ok==s.size()){
        for(int  i = 0; i<26; i++){
            if(a[i]>0){
                int t = a[i]/n;
                while(t--){
                    char c = i+'a';
                    b.push_back(c);
                }

            }
        }
        while(n--){
            cout<<b;
        }
        cout<<endl;
    }else cout<<"-1"<<endl;
}