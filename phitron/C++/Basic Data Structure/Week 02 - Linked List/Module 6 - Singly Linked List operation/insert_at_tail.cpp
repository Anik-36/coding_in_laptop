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
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
int main(){
    Node* head = NULL;
    while(true){
        cout<<"Opiton 1 : insert at tail "<<endl;
        cout<<"Option 2 : Print the Linked List "<<endl;
        cout<<"Option 3 : break "<<endl;
        int op ;
        cin>>op;
        if(op == 1){
            int val;
            cin>>val;
            insert_at_tail(head,val);
        }else if(op == 2){
            print_Linked_List(head);
            cout<<endl;
        }else{
            break;
        }
    }
}