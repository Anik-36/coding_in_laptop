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
void insert_head(Node * &head, Node * &tail,int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_position(Node * &head, Node * &tail, int pos, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    Node * tmp = head;
    for(int i = 1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    if(tmp->next == NULL){
        tmp->next = newNode;
        newNode->prev = tmp;
        tail = newNode;
        return;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
    newNode->next->prev = newNode;
}
int size_list(Node * head){
    Node * tmp = head;
    int ct = 0;
    while(tmp != NULL){
        ct++;
        tmp = tmp->next;
    }
    return ct;
}
void print_normal(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node * tail){
    Node * tmp = tail;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
int main(){
    int q;
    cin>>q;
    Node * head = NULL;
    Node * tail = NULL;
    while(q--){
        int x,v;
        cin>>x>>v;
        if(x == 0){
            insert_head(head,tail,v);
        }else if(x >size_list(head)){
            cout<<"Invalid"<<endl;
            continue;
        }else{
            insert_position(head,tail,x,v);
        }
        cout<<"L -> ";
        print_normal(head);
        cout<<"R -> ";
        print_reverse(tail);
    }
}