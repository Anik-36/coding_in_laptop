/*https://www.hackerrank.com/contests/assignment-04-a-basic-data-structures-a-batch-03/challenges/print-tree-3/problem*/
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
vector<int> v;
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
    queue<Node*> q;
    if(root){
        q.push(root);
    }
    while(!q.empty()){
        Node * p = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node * myLeft, * myRight;
        if(l == -1) myLeft = NULL;
        else  myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        if(myLeft) p->left = myLeft;
        if(myRight) p->right = myRight;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
void level_order(Node * root){
    queue<Node * >q;
    if(root == NULL) return;
    q.push(root);
    while(!q.empty()){
        Node * p = q.front();
        v.push_back(q.front()->val);
        q.pop();

        if(p->right) q.push(p->right);
        if(p->left) q.push(p->left);
    }
}
int main(){
    Node * root = input_tree();
    level_order(root);
    reverse(v.begin(),v.end());
    for(auto val : v){
        cout<<val<<" ";
    }
}