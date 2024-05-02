#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
char upper(char c){
    return 'A' + (c-'a');
}
int main(){
    while(true){
        string s;
        cin>>s;
        if(s.size()==0){
            break;
        }
        for(int i =0 ;i<s.size(); i++){
            s[i]=upper(s[i]);
        }
        cout<<s<<endl;
    }
}