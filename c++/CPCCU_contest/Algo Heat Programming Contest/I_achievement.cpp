#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    vector<string> v;
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        if(i%2!=0){
            v.push_back("I ");
            v.push_back("hate ");
            v.push_back("that ");

        }else{
            v.push_back("I ");
            v.push_back("love ");
            v.push_back("that ");
        }
    }
    v.pop_back();
    v.push_back("it");
    for(auto val : v){
        cout<<val;
    }
    cout<<endl;
}