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
        cout<<endl;
        cout<<"Inserted at Head"<<endl<<endl;
        return;
    }else{
        Node * tmp = head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = new_node;
    }
    cout<<endl<<"Inserted at tail "<<endl<<endl;
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
void insert_at_any_position(Node * head,int pos, int val){
    Node * tmp = head;
    Node * new_node = new Node(val);
    for(int i = 1; i<=pos-1; i++){
        tmp = tmp->next;
        if(tmp == NULL){
            cout<<endl<<"Invalid Index"<<endl<<endl;
            return;
        }
    }
    new_node->next = tmp->next;
    tmp->next = new_node;
    cout<<endl<<"New node is inserted"<<endl<<endl;
}
void insert_at_head(Node * &head , int val){
    Node * newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout<<endl<<endl<<"Inserted at head"<<endl<<endl;
}
void delete_at_position(Node * head,int pos){
    Node * tmp = head;
    for(int i = 1; i<=pos - 1; i++){
        tmp = tmp->next;
    }
    Node * deleteNOde = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNOde;
    cout<<"Deleted Node "<<pos<<endl<<endl;
}
void delete_head(Node * &head){
    Node * deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout<<"Deleted Head "<<endl<<endl;
}
int main(){
    Node* head = NULL;
    while(true){
        cout<<"Opiton 1 : Insert at tail "<<endl;  // done
        cout<<"Option 2 : Print the Linked List "<<endl; // done
        cout<<"Option 3 : Insert at any postion "<<endl; // done
        cout<<"Option 4 : Insert at head "<<endl;
        cout<<"Option 5 : Delete at any position "<<endl;
        cout<<"Option 6 : Delete at head "<<endl;
        cout<<"Option 7 : Break "<<endl;
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
            cout<<"Enter the position : ";
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
            cout<<"Enter the value : ";
            int val;
            cin>>val;
            insert_at_head(head,val);
        }else if(op == 5){
            cout<<"Enter the position : ";
            int pos;
            cin>>pos;
            if(pos == 0){
                delete_head(head);
            }else{
                delete_at_position(head,pos);
            }
        }else if(op == 6){
            delete_head(head);
        }
        else{
            break;
        }
    }
}