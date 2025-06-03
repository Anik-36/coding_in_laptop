#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> p;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        p.push(x);
    }
    int t;
    cin>>t;
    while(t--){
        int q;
        cin>>q;
        if(q==0){
            int x;
            cin>>x;
            p.push(x);
            cout<<p.top()<<endl;
        }else if(q == 1){
            if(!p.empty()){
                cout<<p.top()<<endl;
            }else{
                cout<<"Empty"<<endl;
            }
        }else{
            if(!p.empty()){
                p.pop();
                if(!p.empty()){
                    cout<<p.top()<<endl;
                }else{
                    cout<<"Empty"<<endl;
                }
            }else{
                cout<<"Empty"<<endl;
            }
        }
    }
}