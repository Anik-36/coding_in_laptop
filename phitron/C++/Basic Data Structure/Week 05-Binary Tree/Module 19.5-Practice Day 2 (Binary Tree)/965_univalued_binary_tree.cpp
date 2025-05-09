/**
 * https://leetcode.com/problems/univalued-binary-tree/description/
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
class Solution {
    public:
        bool check(TreeNode * root,int v){
            if(root == NULL) return true;
            if(root->val != v) return false;
            bool l = check(root->left,v);
            bool r = check(root->right,v);
            if(l and r) return true;
            else return false;
        }
        bool isUnivalTree(TreeNode* root) {
            bool c = check(root,root->val);
            return c;
        }
    };