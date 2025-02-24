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
void input_linked_list(Node * &head, Node * &tail, int val){
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
    while(tmp != NULL){
        if(tmp->val > maximum) maximum = tmp->val;
        tmp = tmp->next;
    }
    return maximum;
}
int minimum_linked_list(Node * head){
    Node * tmp = head;
    int minimum = INT_MAX;
    while(tmp != NULL){
        if(tmp->val < minimum) minimum = tmp->val;
        tmp = tmp->next;
    }
    return minimum;
}
int main(){
    Node * head = NULL;
    Node * tail = NULL;
    while(true){
        int val;
        cin>>val;
        if(val == -1) break;
        input_linked_list(head,tail,val);
    }
    int mx = maximum_linked_list(head);
    int mn = minimum_linked_list(head);
    cout<<mx<<" "<<mn<<endl;

}