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
void insert_tail(Node * &head, Node * &tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_list(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void reverse(Node * &head,Node * cur){
    if(cur->next == NULL){
        head = cur;
        return;
    }
    reverse(head,cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
int main(){
    Node * head = NULL;
    Node * tail = NULL;
    Node * newHead = NULL;
    Node * newTail = NULL;
    while(true){
        int val;
        cin>>val;
        if(val == -1) break;
        insert_tail(head,tail,val);
        insert_tail(newHead,newTail,val);
    }
    reverse(newHead,newHead);
    bool flag = true;
    for(Node * i = head, * j= newHead; i != NULL; i = i->next,j= j = j->next){
        if(i->val != j->val){
            flag = false;
            break;
        }
    }
    if(flag == true) yes
    else no
}