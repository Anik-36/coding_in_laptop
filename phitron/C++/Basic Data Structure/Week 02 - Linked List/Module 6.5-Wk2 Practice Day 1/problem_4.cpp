/*Question: Take a singly linked list as input, then take q queries. In each query you will be given an index and value. You need to insert those values in the given index and print the linked list. If the index is invalid print “Invalid”.

Sample Input
Sample Output
10 20 30 -1
7
1 40
5 50
4 50
0 100
7 40
1 110
7 40
10 40 20 30
Invalid
10 40 20 30 50
100 10 40 20 30 50
Invalid
100 110 10 40 20 30 50
100 110 10 40 20 30 50 40

*/

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
void insert_Linked_list(Node * &head, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
    }else{
        Node * tmp = head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
}
bool insert_any_position(Node * head, int val, int pos){
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i = 1; i<=pos - 1; i++){
        tmp = tmp->next;
        if(tmp == NULL){
            cout<<"Invalid";
            return false;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_into_head(Node * &head,int val){
    Node * newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void print_linked_list(Node * head){
    Node * tmp = head;
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
        if(val == -1){
            break;
        }
        insert_Linked_list(head,val);
    }
    int q;
    cin>>q;
    while(q--){
        int index, v;
        cin>>index>>v;
        bool flag = false;
        if(index == 0){
            insert_into_head(head,v);
            flag = true;
        }else{
            flag = insert_any_position(head,v,index);
        }
        if(flag == true){
            print_linked_list(head);
        }
        cout<<endl;
    }
}