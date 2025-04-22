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
Node * input_tree(){
    int val;
    cin>>val;
    Node * root;
    if(val == -1){
        root = NULL;
    }else{
        root = new Node(val);
    }
    queue<Node *> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node * p = q.front();
        q.pop();

        Node * myLeft, * myRight;
        int l,r;
        cin>>l>>r;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        if(myLeft) p->left = myLeft;
        if(myRight) p->right = myRight;

        if(myLeft) q.push(myLeft);
        if(myRight) q.push(myRight);
    }
    return root;
}
void insert_into_tree(Node * &root,int x){
    if(root == NULL){
        root = new Node(x);
        return;
    }
    if(x<root->val){
        if(root->left == NULL){
            root->left = new Node(x);
        }else{
            insert_into_tree(root->left,x);
        }
    }else{
        if(root->right == NULL){
            root->right = new Node(x);
        }else{
            insert_into_tree(root->right,x);
        }

    }
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

    insert_into_tree(root,13);
    insert_into_tree(root,22);
    insert_into_tree(root,27);
    insert_into_tree(root,32);
    level_order(root);
}