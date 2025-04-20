/*https://www.hackerrank.com/contests/assignment-04-a-basic-data-structures-a-batch-03/challenges/sum-of-tree/problem*/
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
Node *  input_binary(){
    int val;
    cin>>val;
    Node * root;
    if(val == -1) root = NULL;
    root = new Node(val);
    queue<Node * > q;
    if(root) q.push(root);
    while(!q.empty()){
        Node * p = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node * myLeft , * myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
int sum_Node(Node * root){
    if(root == NULL) return 0;
    int l = sum_Node(root->left);
    int r = sum_Node(root->right);
    return l+r+root->val;
}
int main(){
    Node * root = input_binary();
    int s = sum_Node(root);
    cout<<s<<endl;
}