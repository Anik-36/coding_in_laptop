/*https://www.hackerrank.com/contests/assignment-04-a-basic-data-structures-a-batch-03/challenges/perfect-binary-tree/problem*/
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
Node * input_tree(int &total){
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
        total++;
        q.pop();

        int l,r;
        cin>>l>>r;
        Node * myLeft, * myRight;
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
int number_of_node(Node * root){
    if(root == NULL) return 0;
    int level = 0;
    queue<pair<Node * , int> > q;
    q.push({root,1});
    while(!q.empty()){
        pair<Node * , int> p = q.front();
        q.pop();
        Node * node = p.first;
        level = p.second;

        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right,level+1});
    }
    return level;
}
int main(){
    int total = 0;
    Node * root = input_tree(total);
    int level = number_of_node(root);
    int number = pow(2,level) - 1;
    if(total == number) yes
    else no
}