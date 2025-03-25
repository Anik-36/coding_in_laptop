#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        stack<char>s;
        string st;
        cin>>st;
        char t = '\0';
        for(auto c:st){
            if(t == '\0'){
                s.push(c);
                t = c;
            }else if((c=='R' and t=='B') or (c=='B' and t=='R')){
                s.pop();
                t = 'P';
                s.push('P');
            }else if((c=='R' and t=='G') or (c=='G' and t=='R')){
                s.pop();
                t = 'Y';
                s.push('Y');
            }else if((c=='B' and t=='G') or (c=='G' and t=='B')){
                s.pop();
                t = 'C';
                s.push('C');
            }else if(c==t){
                s.pop();
                if(!s.empty()){
                    t = s.top();
                }else t = '\0';
            }else{
                s.push(c);
                t=c;
            }
        }
        stack<char>ns;
        while(!s.empty()){
            if(ns.empty()){
                ns.push(s.top());
                s.pop();
            }
            else if(s.top()==ns.top()){
                ns.pop();
                s.pop();
            }else{
                ns.push(s.top());
                s.pop();
            }
        }
        while(!ns.empty()){
            cout<<ns.top();
            ns.pop();
        }
        cout<<endl;
    }
}