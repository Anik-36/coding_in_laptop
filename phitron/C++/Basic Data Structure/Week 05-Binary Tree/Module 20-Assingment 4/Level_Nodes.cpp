/*https://www.hackerrank.com/contests/assignment-04-a-basic-data-structures-a-batch-03/challenges/level-nodes-2/problem*/
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
bool level_print(Node * root , int x){
    bool flag = false;
    if(root == NULL) return flag;
    queue< pair<Node*, int> > q;
    q.push({root,0});
    while(!q.empty()){
        pair<Node*, int> p = q.front();
        q.pop();
        Node * node = p.first;
        int level = p.second;
        if(x == level){
            cout<<node->val<<" ";
            flag = true;
        }

        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right,level+1});
    }
    return flag;
}
int main(){
    Node * root = input_tree();
    int x;
    cin>>x;
    bool flag = level_print(root,x);
    if(flag == false){
        cout<<"Invalid"<<endl;
    }
}