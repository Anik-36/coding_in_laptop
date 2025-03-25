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
            tail = head;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop(){
        if(head == NULL) return;
        sz--;
        Node * deleteNode = tail;
        tail = tail->prev;
        if(tail!= NULL) tail->next = NULL;
        else head = NULL;
        delete deleteNode;
    }
    int top(){
        if(head == NULL) return -1;
        else return tail->val;
    }
    int size(){
        return sz;
    }
    bool isEmpty(){
        return (sz==0);
    }
};
class myQueue{
    public:
    Node * head = NULL;
    Node * tail = NULL;
    int sz = 0;
    void push(int val){
        sz++;
        Node * newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = head;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop(){
        if(head == NULL) return;
        sz--;
        Node * deleteNode = head;
        head = head->next;
        if(head != NULL) head->prev = NULL;
        else tail = NULL;
        delete deleteNode;
    }
    int front(){
        if(head == NULL) return -1;
        else return head->val;
    }
    int size(){
        return sz;
    }
    bool isEmpty(){
        return (sz==0);
    }
};
int main(){
    int n,m;
    cin>>n>>m;
    myStack s;
    while(n--){
        int x;
        cin>>x;
        s.push(x);
    }
    int stSize = s.size();
    myQueue q;
    while(m--){
        int x;
        cin>>x;
        q.push(x);
    }
    int qSize = q.size();
    bool flag = true;
    if(stSize == qSize){
        for(int i = 1; i<=stSize; i++){
            if(s.top() != q.front()){
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