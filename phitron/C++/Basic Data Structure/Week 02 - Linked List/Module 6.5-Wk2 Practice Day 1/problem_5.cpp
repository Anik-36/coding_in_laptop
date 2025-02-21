/*Question: Take a singly linked list as input and check if the linked list is sorted in ascending order.

Sample Input
Sample Output
1 5 6 8 9 -1
YES
2 4 6 5 8 4 -1
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
void insert_linked_list(Node * &head, int val){
    Node * newNode = new Node(val);
    Node * tmp = head;
    if(head == NULL){
        head = newNode;
        return;
    }
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;

}
bool is_ascending(Node * head){
    Node * tmp = head;
    while(tmp->next->next != NULL){
        if(tmp->val > tmp->next->val){
            return false;
        }
        tmp = tmp->next;
    }
    return true;
}
int main(){
    Node * head  = NULL;
    while(true){
        int val;
        cin>>val;
        if(val == -1){
            break;
        }
        insert_linked_list(head,val);
    }
    bool flag = is_ascending(head);
    if(flag == true){
        yes
    }else no
}