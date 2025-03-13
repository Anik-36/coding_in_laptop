#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
class myQueue{
    public:
        list<int> l;
        void push(int val){
            l.push_back(val);
        }
        void pop(){
            l.pop_front();
        }
        int front(){
            return l.front();
        }
        int size(){
            return l.size();
        }
        bool empty(){
            return l.empty();
        }
};
int main(){
    myQueue q;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        q.push(x);
    }
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}