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
void insert_tail(Node* &head,Node* &tail,string val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    return;
}
bool visit(Node* head,string val,Node * &cur){
    Node * tmp = head;
    while(tmp!=NULL){
        if(tmp->val == val){
            cur = tmp;
            return true;
        }
        tmp = tmp->next;
    }
    return false;
}
string previous(Node * &cur){
    if(cur->prev != NULL){
        cur = cur->prev;
        return cur->val;
    }else{
        return "Not Available";
    }
}
string next_val(Node* &cur){
    if(cur->next != NULL){
        cur = cur->next;
        return cur->val;
    }else{
        return "Not Available";
    }
}
int main(){
    Node * head = NULL;
    Node * tail = NULL;
    while(true){
        string s;
        cin>>s;
        if(s == "end") break;
        insert_tail(head,tail,s);
    }
    int q;
    cin>>q;
    Node * cur = head;
    while(q--){
        string a;
        cin>>a;
        if(a=="visit"){
            string b;
            cin>>b;
            bool flag = visit(head,b,cur);
            if(flag) cout<<b<<endl;
            else cout<<"Not Available"<<endl;
        }else if(a=="prev"){
            string v = previous(cur);
            cout<<v<<endl;
        }else{
            string v = next_val(cur);
            cout<<v<<endl;
        }
    }
}