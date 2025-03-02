/*Question: Take a doubly linked list as input and check if it forms any palindrome or not.

Sample Input
Sample Output
10 20 30 20 10 -1
YES
10 20 30 30 20 10 -1
YES
10 20 30 40 20 10 -1
NO
10 20 30 20 40 -1
NO
10 20 30 10 10 -1
NO
10 20 20 20 10 -1
YES

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
bool palindrom_or_not(Node * head, Node * tail){
    Node * i = head;
    Node * j = tail;
    while(i!=j and i->next != j){
        if(i->val != j->val){
            return false;
        }
        i = i->next;
        j = j->prev;
    }
    if(i->val != j->val){
        return false;
    }else{
        return true;
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
    bool flag = palindrom_or_not(head,tail);
    if(flag == true) yes
    else no
}