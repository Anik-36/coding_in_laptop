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
void print_linked_list(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main(){
    Node * head = NULL;
    Node * tail = NULL;
    while(true){
        int val;
        cin>>val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    print_linked_list(head);
}