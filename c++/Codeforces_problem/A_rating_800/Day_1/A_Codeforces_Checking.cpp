#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;
    cin>>t;
    string s = "codeforces";
    while(t--){
        int count =0 ;
        char a;
        cin>>a;
        for(int i =0 ; i<10; i++){
            if(a==s[i]) count++;
        }
        if(count != 0) yes
        else no
    }
}