/**
 *
 * https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
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
        void print_vector(vector<int> v){
            for(int val : v){
                cout<<val<<" ";
            }
        }
        void insert_into_bst(TreeNode * &root, int x){
            if(root == NULL){
                root = new TreeNode(x);
                return;
            }
            if(x<root->val){
                if(root->left == NULL){
                    root->left = new TreeNode(x);
                }else{
                    insert_into_bst(root->left,x);
                }
            }else{
                if(root->right == NULL){
                    root->right = new TreeNode(x);
                }else{
                    insert_into_bst(root->right,x);
                }
            }
            return;
        }
        TreeNode* sortedArrayToBST(vector<int>& v) {
            int mid = v.size()/2;
            TreeNode * root = new TreeNode(v[mid]);
            queue<int> q;
            for(int i = 0 ; i<v.size(); i++){
                if(i == mid) continue;
                q.push(v[i]);
            }
            while(!q.empty()){
                insert_into_bst( root , q.front() );
                q.pop();
            }
            print_vector(v);
            return root;
        }
    };