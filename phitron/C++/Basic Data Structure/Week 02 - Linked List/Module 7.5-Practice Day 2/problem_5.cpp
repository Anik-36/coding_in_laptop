/*Question: Take a singly linked list as input and sort it in descending order. Then print the list.

Sample Input
Sample Output
1 4 5 2 7 -1
7 5 4 2 1
20 40 30 10 50 60 -1
60 50 40 30 20 10

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
void print_linked_list(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
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
    for(Node *  i = head; i->next!=NULL; i = i->next){
        for(Node *  j = i->next; j != NULL; j = j->next){
            if(i->val<j->val){
                swap(i->val,j->val);
            }
        }
    }
    print_linked_list(head);

}