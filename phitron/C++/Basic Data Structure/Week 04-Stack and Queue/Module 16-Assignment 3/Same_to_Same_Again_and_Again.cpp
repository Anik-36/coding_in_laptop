#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    stack<int> s;
    while(n--){
        int x;
        cin>>x;
        s.push(x);
    }
    int sSize = s.size();
    queue<int> q;
    while(m--){
        int x;
        cin>>x;
        q.push(x);
    }
    int qSize = q.size();
    bool flag = true;
    if(sSize == qSize){
        for(int i = 1; i<=sSize; i++){
            if(s.top()!= q.front()){
                flag = false;
                break;
            }
            s.pop();
            q.pop();
        }
        if(flag == true) yes
        else no

    }else no
}