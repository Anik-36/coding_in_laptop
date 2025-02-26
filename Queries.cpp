#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
class Node{
    public:
        ll val;
        Node* next;
        Node(ll val){
            this->val = val;
            this->next = NULL;
        }
};
void insert_into_tail(Node * &head,Node * &tail, ll val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        cout<<head->val<<" "<<tail->val<<endl;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    cout<<head->val<<" "<<tail->val<<endl;
}
void insert_into_head(Node * &head, Node * &tail, ll val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        cout<<head->val<<" "<<tail->val<<endl;
        return;
    }
    newNode->next = head;
    head = newNode;
    cout<<head->val<<" "<<tail->val<<endl;

}
void output_head_tail(Node * head){
    Node * tmp = head;
    cout<<head->val<<" ";
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    cout<<tmp->val<<endl;
}
int main(){
    Node * head = NULL;
    Node * tail = NULL;
    int q ;
    cin>>q;
    while(q--){
        ll x,v;
        cin>>x>>v;
        if(x == 0){
            insert_into_head(head,tail,v);
        }else{
            insert_into_tail(head,tail,v);
        }
    }
}