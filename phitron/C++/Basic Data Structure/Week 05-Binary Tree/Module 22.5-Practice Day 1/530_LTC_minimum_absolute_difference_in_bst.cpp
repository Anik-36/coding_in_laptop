/**
 * https://leetcode.com/problems/minimum-absolute-difference-in-bst/description/
 *
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
class Solution {
    public:
        vector<int> tree_array(TreeNode * root){
            queue<TreeNode * > q1;
            vector<int> v;
            if(root){
                q1.push(root);
                v.push_back(root->val);
            }
            while(!q1.empty()){
                TreeNode * p = q1.front();
                q1.pop();

                if(p->left){
                    q1.push(p->left);
                    v.push_back(p->left->val);
                }
                if(p->right){
                    q1.push(p->right);
                    v.push_back(p->right->val);
                }
            }
            return v;
        }
        int getMinimumDifference(TreeNode* root) {
            vector<int> v = tree_arra(root);
            sort(v.begin(),v.end());
            int diff = abs(v[0]-v[1]);
            return diff;
        }
    };