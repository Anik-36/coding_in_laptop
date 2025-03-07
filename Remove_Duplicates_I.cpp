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
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
void insert_tail(Node * &head, Node * &tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_list(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
void duplicate(Node * head){
    Node * tmp = head;
    while(tmp->next->next != NULL){
        if(tmp->val == tmp->next->val){
            Node * deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deleteNode;
        }
        tmp = tmp->next;
    }
    if(tmp->val == tmp->next->val){
        Node * deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
}
int main(){
    Node * head = NULL;
    Node * tail = NULL;
    while(true){
        int val;
        cin>>val;
        if(val == -1) break;
        insert_tail(head,tail,val);
    }
    for(Node * i = head; i->next != NULL; i = i->next){
        for(Node * j = i->next; j != NULL; j = j->next){
            if(i->val > j->val){
                swap(i->val,j->val);
            }
        }
    }
    duplicate(head);
    print_list(head);
}