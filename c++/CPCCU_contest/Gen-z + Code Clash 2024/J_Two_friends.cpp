#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ca = 0, cd = 0;
    for(int i = 0 ; i<s.size(); i++){
        if(s[i]=='A') ca++;
        else cd++;
    }
    if(ca>cd){
        cout<<"Anton"<<endl;
    }else if(cd>ca){
        cout<<"Danik"<<endl;
    }else cout<<"Friendship"<<endl;
}