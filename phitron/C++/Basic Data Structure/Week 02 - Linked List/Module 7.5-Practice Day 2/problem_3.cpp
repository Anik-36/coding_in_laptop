/*
Question: Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.


Sample Input
Sample Output
2 4 6 8 10 -1
6
1 2 3 4 5 6 -1
3 4

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
void middle_element(Node * head,int pos){
    Node * tmp= head;
    for(int i = 1; i<=pos; i++){
        tmp = tmp->next;
    }
    cout<<tmp->val<<" ";
}
int main(){
    Node * head = NULL;
    Node * tail = NULL;
    while(true){
        int val;
        cin>>val;
        if(val == -1){
            break;
        }
        input_into_linked_list(head,tail,val);
    }
    int size = size_of_linked_list(head);
    if(size%2==0){
        middle_element(head,(size/2)-1);
        middle_element(head,(size/2));
    }else{
        middle_element(head,(size/2));
    }
}