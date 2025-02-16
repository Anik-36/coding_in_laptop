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
};
int main(){
    Node a,b;
    a.val = 10;
    b.val = 20;
    a.next = &b;
    b.next = NULL;
    cout<<a.val<<endl;
    cout<<b.val<<endl;
    cout<<(*a.next).val<<endl;
    cout<<a.next->val<<endl;
}