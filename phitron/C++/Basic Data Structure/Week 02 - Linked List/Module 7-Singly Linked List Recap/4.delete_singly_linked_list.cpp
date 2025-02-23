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
    cout<<endl;
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
void delete_linked_list(Node * head, int pos){
    Node * tmp = head;
    for(int i = 1; i<= pos - 1; i++){
        tmp = tmp->next;
    }
    Node * deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
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

    int pos;
    cout<<"Enter the index : ";
    cin>>pos;
    int size = size_of_linked_list(head);
    if(pos>=size){
        cout<<"Invalid Index"<<endl;
    }else{
        delete_linked_list(head,pos);
    }
    print_linked_list(head);
}