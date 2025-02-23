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
void print_recursively(Node * n){
    // base case
    if(n == NULL){
        return;
    }
    cout<<n->val<<" ";
    print_recursively(n->next);
}
void print_reverse(Node * n){
    // base case
    if(n == NULL){
        return;
    }
    print_reverse(n->next);
    cout<<n->val<<" ";
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

    print_recursively(head);
    cout<<endl;
    print_reverse(head);
}