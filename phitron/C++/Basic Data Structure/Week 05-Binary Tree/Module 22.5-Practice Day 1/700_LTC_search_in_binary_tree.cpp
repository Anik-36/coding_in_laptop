/**
 *
 https://leetcode.com/problems/search-in-a-binary-search-tree/description/
 
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
        TreeNode * search(TreeNode * root, int val){
            queue<TreeNode * > q;
            if(root) q.push(root);
            while(!q.empty()){
                TreeNode * p = q.front();
                q.pop();

                if(p->val == val) return p;

                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
            }
            return NULL;
        }
        TreeNode* searchBST(TreeNode* root, int val) {
            TreeNode * ans = search(root,val);
            return ans;
        }
    };