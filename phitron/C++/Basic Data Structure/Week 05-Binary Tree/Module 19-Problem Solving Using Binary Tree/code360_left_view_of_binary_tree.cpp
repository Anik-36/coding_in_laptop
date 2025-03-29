#include <bits/stdc++.h>
/************************************************************
 *
 * https://www.naukri.com/code360/problems/left-view-of-a-binary-tree_920519?leftPanelTabValue=PROBLEM

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    queue<pair<TreeNode<int> * , int > > q;
    bool fr[3005] = {false};
    vector<int> v;
    if(root) q.push({root,1});
    while(!q.empty()){
        pair<TreeNode<int>*,int> p = q.front();
        q.pop();
        TreeNode<int>* node = p.first;
        int level = p.second;

        if(fr[level] == false){
            v.push_back(node->data);
            fr[level] = true;
        }
        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right,level+1});
    }
    return v;
}