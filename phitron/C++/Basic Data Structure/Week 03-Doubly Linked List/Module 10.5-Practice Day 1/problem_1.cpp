/*
Question: Take two doubly linked lists as input and check if they are the same or not.

Sample Input
Sample Output
10 20 30 40 50 -1
10 20 30 40 50 -1
YES
10 20 30 40 50 -1
10 20 30 40 -1
NO
10 20 30 40 -1
10 20 30 40 50 -1
NO
10 20 30 40 -1
40 30 20 10 -1
NO
1 2 3 4 5 -1
5 4 1 2 6 -1
NO

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
int size_linked_list(Node * head){
    Node * tmp = head;
    int ct = 0;
    while(tmp != NULL){
        ct++;
        tmp = tmp->next;
    }
    return ct ;
}
int main(){
    Node * head1 = NULL;
    Node * tail1 = NULL;
    while(true){
        int val;
        cin>>val;
        if(val == -1) break;
        input_doubly_linked_list(head1,tail1,val);
    }
    int size1 = size_linked_list(head1);
    Node * head2 = NULL;
    Node * tail2 = NULL;
    while(true){
        int val;
        cin>>val;
        if(val == -1) break;
        input_doubly_linked_list(head2,tail2,val);
    }
    int size2 = size_linked_list(head2);
    bool flag = true;
    if(size1 == size2){
        for(Node * i = head1, * j = head2; i!=NULL; i = i->next,j= j->next){
            if(i->val != j->val){
                flag = false;
                break;
            }
        }
    }else{
        flag = false;
    }

    if(flag == true) yes
    else no
}