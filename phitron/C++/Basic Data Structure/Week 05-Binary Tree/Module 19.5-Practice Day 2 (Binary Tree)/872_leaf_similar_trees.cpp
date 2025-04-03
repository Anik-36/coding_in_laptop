/**
 *https://leetcode.com/problems/leaf-similar-trees/
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
vector<int> v1;
vector<int> v2;
class Solution {
public:
   void inOrder(TreeNode* root,int x){
       if(root == NULL) return;
       inOrder(root->left,x);
       if(x == 1){
           if(root->left == NULL and root->right == NULL) v1.push_back(root->val);
       }else{
           if(root->left == NULL and root->right == NULL) v2.push_back(root->val);
       }
       inOrder(root->right,x);
   }
   bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       v1.clear();
       v2.clear();
       inOrder(root1,1);
       inOrder(root2,2);
       if(v1==v2) return true;
       else return false;
   }
};