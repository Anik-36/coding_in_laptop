/*Question: Take a doubly linked list as input and reverse it. After that print the linked list.

Sample Input
Sample Output
10 20 30 -1
30 20 10


10 20 30 40 -1
40 30 20 10

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
        Node* prev;
        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void input_doubly_linked_list(Node * &head,Node * &tail,int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void reverse_linked_list(Node * &head, Node * tail){
    Node * i = head;
    Node * j = tail;
    while(i != j and i->next != j){
        swap(i->val , j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val,j->val);
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
    Node * tail = NULL;
    while(true){
        int val;
        cin>>val;
        if(val == -1) break;
        input_doubly_linked_list(head,tail,val);
    }
    reverse_linked_list(head,tail);
    print_linked_list(head);
}