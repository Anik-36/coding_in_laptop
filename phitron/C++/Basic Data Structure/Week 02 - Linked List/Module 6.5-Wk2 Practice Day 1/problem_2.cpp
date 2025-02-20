/*Question: Take a singly linked list as input and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.


Sample Input
Sample Output
5 4 8 6 2 1 -1
NO


2 4 5 6 7 4 -1
YES


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
void insert_in_linked_list(Node * &head,int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }else{
        Node * tmp = head;
        while(tmp-> next != NULL){
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
}
bool is_duplicate(Node * head){
    vector<int> fq(101,0);
    Node * tmp = head;
    while(tmp != NULL){
        fq[tmp->val]++;
        tmp = tmp->next;
    }
    bool flag = false;
    for(int i = 0; i<101; i++){
        // cout<<i<<" = "<<fq[i]<<endl;
        if(fq[i]>1){
            flag = true;
        }
    }
    return flag;
}
void print_linked_list(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
}
int main(){
    Node * head = NULL;
    while(true){
        int val;
        cin>>val;
        if(val == -1){
            break;
        }
        insert_in_linked_list(head,val);
    }
    bool flag = is_duplicate(head);
    if(flag == true) yes
    else no
}