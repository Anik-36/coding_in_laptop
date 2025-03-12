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
class myStack{
    public:
    Node * head = NULL;
    Node * tail = NULL;
    int sz = 0;
    void push(int val){
        sz++;
        Node * newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return;
    }
    void pop(){
        sz --;
        Node * deleteNode = tail;
        tail = tail->prev ;
        if(tail == NULL){
            head = NULL;
            return;
        }
        tail->next = NULL;
        delete deleteNode;
    }
    int size(){
        return sz;
    }
    int top(){
        return tail->val;
    }
    bool empty(){
        if (sz == 0) return true;
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