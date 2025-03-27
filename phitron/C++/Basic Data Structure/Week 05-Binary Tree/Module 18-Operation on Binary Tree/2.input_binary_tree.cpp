#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
class Node{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
Node *  input_tree(){
    int val;
    cin>>val;
    Node * root;
    if(val == -1) root = NULL;
    else{
        root = new Node(val);
    }
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){

        // 1. ber kore ano
        Node * p = q.front();
        q.pop();

        // 2. jabotiyo joto kaj ache koro

        int l,r ;
        cin>>l>>r;
        Node * myLeft, * myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        // root er sathe left right connect kore dew
        p->left = myLeft;
        p->right = myRight;

        // 3. child gulo push koro

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
void level_order(Node * root){
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        // front ber korte hobe
        Node * f = q.front();
        q.pop();

        // ja iccha kaj kore nite hobe
        cout<<f->val<<" ";

        // or child gula add korte hobe
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);

    }
}
int main(){
    Node * root = input_tree();
    level_order(root);
}