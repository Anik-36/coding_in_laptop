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
int main(){
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);
}