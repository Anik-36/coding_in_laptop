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
void print_linked_list(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
void insert_in_linked_list(Node * head,int pos , int val){
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i = 1; i<pos - 1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_at_head(Node * &head, int val){  // O(1)
    Node * newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node * &head, Node * &tail, int val){  // O(1)
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int size_of_linked_list(Node * head){  // O(N)
    Node * tmp = head;
    int size = 0;
    while(tmp != NULL){
        size++;
        tmp = tmp->next;
    }
    return size;
}
int main(){
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    Node * tail = d;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);
    cout<<endl;

    int pos,val;
    cin>>pos>>val;
    int size = size_of_linked_list(head);
    if(pos>size){
        cout<<"Invalid Index"<<endl;
    }else if(pos == 0){
        insert_at_head(head,val);
    }else if(pos == size){
        insert_at_tail(head,tail,val);
    }else{
        insert_in_linked_list(head,pos,val);
    }
    print_linked_list(head);
}