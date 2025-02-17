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
    Node a(10);
    Node b(20);

    a.next = &b;
    
    cout<<a.val<<endl;
    cout<<b.val<<endl;
    cout<<(*a.next).val<<endl;
    cout<<a.next->val<<endl;
}