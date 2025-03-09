#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
class Node{
    public:
        string val;
        Node* next;
        Node* prev;
        Node(string val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void insert_list(Node * &head,Node * &tail,string val){
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
Node* visit(Node * head,string val,Node * cur){
    Node * tmp = head;
    while(tmp != NULL){
        if(tmp->val == val){
            cout<<val<<endl;
            cur = tmp;
            return tmp;
        }
        tmp = tmp->next;
    }
    cout<<"Not Available"<<endl;
    return cur;
}
Node *  prevs(Node * cur){
    Node * tmp = cur;
    if(tmp->prev != NULL){
        tmp = tmp->prev;
        cur = tmp;
        cout<<tmp->val<<endl;
        return cur;
    }else{
        cout<<"Not Available"<<endl;
        return cur;
    }
}
Node * nexts(Node * cur){
    Node * tmp = cur;
    if(tmp->next != NULL){
        tmp = tmp->next;
        cur = tmp;
        cout<<tmp->val<<endl;
        return cur;
    }else{
        cout<<"Not Available"<<endl;
        return cur;
    }
}
int main(){
    Node * head = NULL;
    Node * tail = NULL;
    Node * cur = NULL;
    while(true){
        string address;
        cin>>address;
        if(address == "end") break;
        insert_list(head,tail,address);
    }
    int q ;
    cin>>q;
    while(q--){
        string a;
        cin>>a;
        if(a == "visit"){
            string ad;
            cin>>ad;
            cur = visit(head,ad,cur);
        }else if(a == "prev"){
            cur = prevs(cur);
        }else{
            cur = nexts(cur);
        }
    }
}