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
bool search_in_binary(Node * root, int x){
    if(root == NULL) return false;
    if(root->val == x) return true;
    if(x<root->val){
        return search_in_binary(root->left,x);
    }else{
        return search_in_binary(root->right,x);
    }
}
int main(){
    Node * root = input_tree();
    if(search_in_binary,6){
        cout<<"Yes, Found the number"<<endl;
    }else{
        cout<<"No, Not found the number"<<endl;
    }
}