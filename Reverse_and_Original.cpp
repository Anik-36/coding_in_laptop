/*
Question: Take a singly linked list as input and print the reverse of the linked list.

Sample Input
Sample Output
5 4 8 6 2 1 -1
1 2 6 8 4 5


1 2 3 4 -1
4 3 2 1

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
void input_into_linked_list(Node * &head,Node * &tail,int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_reverse(Node * n){
    if(n == NULL) return;
    print_reverse(n->next);
    cout<<n->val<<" ";
}
void print_linked_list(Node * n){
    if(n == NULL) return;
    cout<<n->val<<" ";
    print_linked_list(n->next);
}
int main(){
    Node * head = NULL;
    Node * tail = NULL;
    while(true){
        int val;
        cin>>val;
        if(val == -1) break;
        input_into_linked_list(head,tail,val);
    }
    print_reverse(head);
    cout<<endl;
    print_linked_list(head);
    cout<<endl;

}