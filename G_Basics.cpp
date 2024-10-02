#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string s;
    cin>>s;
    int cu = 0 , cl = 0;
    for(int i = 0 ; i<s.size(); i++){
        if(s[i]>='a' and s[i]<='z'){
            cl++;
        }else{
            cu++;
        }
    }
    if(cu>cl){
        for(int i = 0 ; i<s.size(); i++){
            s[i] = toupper(s[i]);
        }
    }else{
        for(int i = 0 ; i<s.size(); i++){
            s[i] = tolower(s[i]);
        }
    }
    cout<<s<<endl;
}