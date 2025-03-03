/*
Question: Take a doubly linked list as input and sort it in ascending order. Then print the list.

Sample Input
Sample Output
1 4 5 2 7 -1
1 2 4 5 7
20 40 30 10 50 60 -1
10 20 30 40 50 60

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
int size_of_list(Node * head){
    Node * tmp = head ;
    int ct = 0;
    while(tmp != NULL){
        ct++;
        tmp = tmp ->next;
    }
    return ct;
}
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
void print_normal(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
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
    for(Node * i = head; i->next != NULL; i = i->next){
        for(Node * j = i->next; j != NULL; j = j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }
    print_normal(head);

}