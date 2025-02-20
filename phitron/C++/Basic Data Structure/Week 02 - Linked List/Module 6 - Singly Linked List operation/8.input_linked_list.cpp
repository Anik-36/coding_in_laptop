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
void insert_at_tail(Node * &head, int v){
    Node* new_node = new Node(v);

    if(head == NULL){
        head = new_node;
        return;
    }else{
        Node * tmp = head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = new_node;
    }
}
void print_Linked_List(Node * head){
    Node * tmp = head;
    cout<<endl;
    cout<<"Your Linked List is : ";
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
int main(){
    Node * head = NULL;
    while(true){
        int val;
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head,val);
    }
    print_Linked_List(head);
}