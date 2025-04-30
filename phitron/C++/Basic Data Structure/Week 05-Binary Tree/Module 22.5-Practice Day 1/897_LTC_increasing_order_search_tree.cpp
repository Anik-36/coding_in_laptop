/**
 *
 * https://leetcode.com/problems/increasing-order-search-tree/description/
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
        vector<int> tree_to_array(TreeNode * root){
            queue<TreeNode*> q;
            vector<int> v;
            if(root){
                q.push(root);
                v.push_back(root->val);
            }
            while(!q.empty()){
                TreeNode * p = q.front();
                q.pop();

                if(p->left){
                    q.push(p->left);
                    v.push_back(p->left->val);
                }
                if(p->right){
                    q.push(p->right);
                    v.push_back(p->right->val);
                }
            }
            return v;
        }
        void insert_into_bst(TreeNode * &root,int x){
            if(root == NULL){
                root = new TreeNode(x);
                return;
            }else if(x<root->val){
                if(root->left == NULL){
                    root->left = new TreeNode(x);
                    return;
                }else{
                    insert_into_bst(root->left,x);
                }
            }else{
                if(root->right ==NULL){
                    root->right = new TreeNode(x);
                    return;
                }else{
                    insert_into_bst(root->right,x);
                }
            }
        }
        TreeNode* increasingBST(TreeNode* root) {
            vector<int> v = tree_to_array(root);
            sort(v.begin(),v.end(),greater<int>());
            TreeNode * newRoot = NULL;
            while(!v.empty()){
                int x = v[v.size()-1];
                insert_into_bst(newRoot,x);
                v.pop_back();
            }
            return newRoot;
        }
    };