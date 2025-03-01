/*it is known as Hare and Tortois algorithm */


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
        }
};
int main(){
    Node * head = new Node(10);
    Node * a = new Node (20);
    Node * b = new Node (30);
    Node * c = new Node (40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = a;

    Node * slow = head;
    Node * fast = head;
    bool flag = false;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            flag = true;
            break;
        }
    }
    if(flag == true){
        cout<<"Cycle Detected"<<endl;
    }else{
        cout<<"Cycle is not Detected"<<endl;
    }
}

