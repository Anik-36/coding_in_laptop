#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>> pq; // priority queue doesn't work with function. thats why greater<int>() is not written. it works with direct class.
    while(true){
        int c;
        cin>>c;
        if(c==0){
            int x;
            cin>>x;
            pq.push(x); // O(Log(N))
        }else if(c==1){
            pq.pop();  // O(Log(N));
        }else if(c==2){
            cout<<pq.top()<<endl; // O(1)
        }else{
            break;
        }
    }
}