#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
class Node{
    public:
        int val;
        Node * left;
        Node * right;
        Node(int val){
            this->val = val;
            this->left = left;
            this->right = right;
        }
};
Node* input_binary(){
    int val;
    cin>>val;
    Node * root = NULL;
    if(val == -1){
        root = NULL;
    }else{
        root = new Node(val);
    }
    queue<Node * > q;
    if(root) q.push(root);
    while(!q.empty()){
        Node * p = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node * myLeft,*myRight;
        if(l==-1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r==-1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if(p->left) q.push(myLeft);
        if(p->right) q.push(myRight);
    }
    return root;
}
void level_order(Node * root){
    if(root == NULL) return;
    queue<Node * > q;
    if(root) q.push(root);
    while(!q.empty()){
        Node * p = q.front();
        q.pop();

        cout<<p->val<<" ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}
int main(){
    Node * root = input_binary();
    level_order(root);
}