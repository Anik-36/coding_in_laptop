/*https://www.hackerrank.com/contests/assignment-04-a-basic-data-structures-a-batch-03/challenges/max-min-leaf*/
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
void mx_mn_leaf(Node * root,int &mx, int &mn){
    if(root == NULL) return;
    if(root->left == NULL and root->right == NULL){
        if(root->val<=mn){
            mn = root->val;
        }
        if(root->val >= mx){
            mx = root->val;
        }
        return;
    }
    mx_mn_leaf(root->left,mx,mn);
    mx_mn_leaf(root->right,mx,mn);
    return;
}
int main(){
    int mn = INT_MAX, mx = INT_MIN;
    Node * root = input_tree();
    mx_mn_leaf(root,mx,mn);
    cout<<mx<<" "<<mn<<endl;
}