/**
 *
 * https://leetcode.com/problems/range-sum-of-bst/description/
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
        int bstSum(TreeNode* root,int low,int high,int &sum){
            if(root == NULL) return 0;
            if(root->val >= low and root->val <= high){
                sum+=root->val;
            }
            bstSum(root->left,low,high,sum);
            bstSum(root->right,low,high,sum);
            return sum;
        }
        int rangeSumBST(TreeNode* root, int low, int high) {
            int sum = 0;
            sum = bstSum(root,low,high,sum);
            return sum;
        }
    };