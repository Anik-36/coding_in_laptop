/*Question: You have a doubly linked list which is empty initially. You need to take a value Q which refers to queries. For each query you will be given X and V. You will insert the value V to the Xth index of the doubly linked list and print the list in both left to right and right to left. If the index is invalid then print “Invalid”.


Sample Input
Sample Output
6
0 10
1 20
4 30
0 30
1 40
5 50
10
10
10 20
20 10
Invalid
30 10 20
20 10 30
30 40 10 20
20 10 40 30
Invalid

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
void insert_head(Node * &head, Node * &tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_any_position(Node * head,int pos,int val){
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i = 1; i<=pos - 1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
    newNode->next->prev = newNode;
}
void print_normal(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node * tail){
    Node * tmp = tail;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
int main(){
    Node * head = NULL;
    Node * tail = NULL;
    int q;
    cin>>q;

    while(q--){
        int x,val;

        cin>>x>>val;
        if(x == 0){
            insert_head(head,tail,val);
        }else if(x == size_of_list(head)){
            input_doubly_linked_list(head,tail,val);
        }else if(x > size_of_list(head)){
            cout<<"Invalid"<<endl;
            continue;
        }else{
            insert_any_position(head,x,val);
        }
        print_normal(head);
        print_reverse(tail);
    }

}