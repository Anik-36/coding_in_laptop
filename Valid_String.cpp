#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        stack<char> s;
        string st;
        cin>>st;
        for(char c : st){
            s.push(c);
        }

        stack<char> n;
        while(!s.empty()){
            if(n.empty()){
                n.push(s.top());
                s.pop();
            }else{
                if(s.top()!=n.top()){
                    n.pop();
                    s.pop();
                }else{
                    n.push(s.top());
                    s.pop();
                }
            }
        }
        if(n.empty()) yes
        else no

    }
}