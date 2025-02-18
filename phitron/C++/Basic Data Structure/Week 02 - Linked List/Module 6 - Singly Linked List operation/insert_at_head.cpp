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
        cout<<"Inserted at Head"<<endl;
        return;
    }else{
        Node * tmp = head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = new_node;
    }
    cout<<endl<<"Inserted at tail "<<endl;
}
void print_Linked_List(Node * head){
    Node * tmp = head;
    cout<<"Your Linked List is : ";
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
void insert_at_any_position(Node * head,int pos, int val){
    Node * tmp = head;
    Node * new_node = new Node(val);
    for(int i = 1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    new_node->next = tmp->next;
    tmp->next = new_node;
    cout<<endl<<"New node is inserted"<<endl<<endl;
}
void insert_at_head(Node * &head , int val){
    Node * newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"Inserted at head"<<endl;
}
int main(){
    Node* head = NULL;
    while(true){
        cout<<"Opiton 1 : Insert at tail "<<endl;
        cout<<"Option 2 : Print the Linked List "<<endl;
        cout<<"Option 3 : Insert at any postion "<<endl;
        cout<<"Option 4 : Insert at head "<<endl;
        cout<<"Option 5 : Break "<<endl;
        int op ;
        cin>>op;
        if(op == 1){
            cout<<"Insert a value : ";
            int val;
            cin>>val;
            insert_at_tail(head,val);
            cout<<endl<<endl;
        }else if(op == 2){
            print_Linked_List(head);
            cout<<endl<<endl;
        }else if(op == 3){
            cout<<"Inter the position : ";
            int pos;
            cin>>pos;
            cout<<"Enter the value : ";
            int val;
            cin>>val;
            if(pos == 0){
                insert_at_head(head,val);
            }else{
                insert_at_any_position(head,pos,val);
            }
        }else if(op == 4){
            int val;
            cin>>val;
            insert_at_head(head,val);
        }
        else{
            break;
        }
    }
}