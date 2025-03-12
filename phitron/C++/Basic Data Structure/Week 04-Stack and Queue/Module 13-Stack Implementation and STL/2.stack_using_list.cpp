#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
class myStack{
    public:
        list<int> l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }
    int size(){
        return l.size();
    }
    int top(){
        return l.back();
    }
    bool empty(){
        if (l.size() == 0) return true;
        else return false;
    }
};
int main(){
    myStack st;
    int v;
    cin>>v;
    while(v--){
        int x;
        cin>>x;
        st.push(x);
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}