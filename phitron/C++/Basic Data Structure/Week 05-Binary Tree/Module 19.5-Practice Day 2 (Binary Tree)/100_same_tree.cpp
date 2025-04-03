/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
int f = 0;
class Solution {
public:
    void preorder(TreeNode* root1,TreeNode* root2 ){
        if(root1 == NULL and root2 == NULL){
            return;
        }
        if(root1 == NULL and root2 != NULL){
            f = 1;
            return;
        }else if(root1!=NULL and root2 == NULL){
            f = 1;
            return;
        }
        if(root1 != NULL and root2 != NULL){
            if(root1->val != root2->val) f = 1;
        }
        preorder( root1->left , root2->left);
        preorder(root1->right,root2->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        f = 0;
        preorder(p,q);
        if(f == 1) return false;
        else return true;
    }
};