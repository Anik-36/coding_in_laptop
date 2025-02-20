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
void insert_linked_list(Node * &head, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
    }else{
        Node * tmp = head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
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
int print_middle_value(Node * head, int pos){
    Node * tmp = head;
    for(int i = 1; i<=pos ; i++){
        tmp = tmp->next;
    }
    return tmp->val;
}
int main(){
    Node * head = NULL;
    while(true){
        int val ;
        cin>>val;
        if(val == -1){
            break;
        }
        insert_linked_list(head,val);
    }
    int size = size_of_linked_list(head);
    if(size%2==0){
        int mid1 = print_middle_value(head, (size/2)-1);
        cout<<mid1<<" ";
        int mid2 = print_middle_value(head, (size/2));
        cout<<mid2<<endl;
    }else{
        int mid = print_middle_value(head,(size/2));
        cout<<mid<<endl;
    }
}