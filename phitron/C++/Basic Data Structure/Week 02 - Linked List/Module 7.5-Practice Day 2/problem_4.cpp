/*Question: Take a singly linked list as input, then print the maximum value of them.


Sample Input
Sample Output
2 4 1 3 5 4 2 5 -1
5
5 4 1 2 5 6 8 4 1 3 -1
8

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
int maximum_linked_list(Node * head){
    Node * tmp = head;
    int maximum = INT_MIN;
    while(tmp->next != NULL){
        if(tmp->val > maximum) maximum = tmp->val;
        tmp = tmp->next;
    }
    return maximum;
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
    int mx = maximum_linked_list(head);
    cout<<mx<<endl;
}