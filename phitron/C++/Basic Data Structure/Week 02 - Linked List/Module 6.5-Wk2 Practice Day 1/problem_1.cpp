/* Question: Take a singly linked list as input and print the size of the linked list.

Sample Input
Sample Output
2 1 5 3 4 8 9 -1
7
5 1 4 5 -1
4

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
        return;
    }else{
        Node * tmp = head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
}
int print_size_linked_list(Node * head){
    Node * tmp = head;
    int size = 0;
    while(tmp->next != NULL){
        tmp = tmp->next;
        size++;
    }
    return size;

}
int main(){
    Node * head = NULL;
    while(true){
        int val;
        if(val == -1){
            break;
        }
        cin>>val;
        insert_linked_list(head,val);
    }
    int size = print_size_linked_list(head);
    cout<<size<<endl;
}