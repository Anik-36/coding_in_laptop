/**
 * https://leetcode.com/problems/binary-tree-tilt/description/
 * 
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
int tilt = 0;
class Solution {
public:
    int diff(TreeNode* root){
        if(root == NULL) return 0;
        int l = diff(root->left);
        int r = diff(root->right);
        tilt = tilt+ abs(l-r);
        return l+r+root->val;

    }
    int findTilt(TreeNode* root) {
        tilt = 0;
        int s = diff(root);
        return tilt;
    }
};