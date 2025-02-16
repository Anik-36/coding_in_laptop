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
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);

    head->next = a;

    // cout<<(*head).val<<endl;
    cout<<head->val<<endl;
    // cout<<(*(*head).next).val<<endl;
    cout<<head->next->val<<endl;
}