/*
Question: Take two singly linked lists as input and check if their sizes are same or not.

Sample Input
Sample Output
2 1 5 3 4 9 -1
1 2 3 4 5 6 -1
YES
5 1 4 5 -1
5 1 4 -1
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
int size_of_linked_list(Node * head){
    Node * tmp = head;
    int size = 0;
    while(tmp != NULL){
        size++;
        tmp = tmp->next;
    }
    return size;
}
int main(){
    Node * head1 = NULL;
    Node * tail1 = NULL;
    while(true){
        int val;
        cin>>val;
        if(val == -1) break;
        input_into_linked_list(head1,tail1,val);
    }
    int size1 = size_of_linked_list(head1);

    Node * head2 = NULL;
    Node * tail2 = NULL;
    while(true){
        int val;
        cin>>val;
        if(val == -1) break;
        input_into_linked_list(head2,tail2,val);
    }
    int size2 = size_of_linked_list(head2);

    if(size1 == size2) yes
    else no

}