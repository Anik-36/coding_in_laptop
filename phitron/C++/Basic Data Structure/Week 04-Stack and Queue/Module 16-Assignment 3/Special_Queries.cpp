#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int q;
    cin>>q;
    queue<string> s;
    while(q--){
        int n;
        cin>>n;
        if(n==0){
            string a;
            cin>>a;
            s.push(a);
        }else{
            if(s.empty()) cout<<"Invalid"<<endl;
            else{
                cout<<s.front()<<endl;
                s.pop();
            }
        }
    }
}