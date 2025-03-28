#include <bits/stdc++.h>
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> v;
void levelOrder(BinaryTreeNode<int> * root){
    if(root == NULL) return;
    queue<BinaryTreeNode<int> *> q;
    if(root) q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int> * p = q.front();
        q.pop();
        v.push_back(p->val);
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    v.clear();
    levelOrder(root);
    return v;
}