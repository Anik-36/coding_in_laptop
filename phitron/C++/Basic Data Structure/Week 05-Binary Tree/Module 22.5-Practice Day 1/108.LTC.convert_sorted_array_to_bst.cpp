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
class Solution {
    public:
        TreeNode * root = NULL;
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
        void sort_array(vector<int> &v,int l,int r){
            if(l>r) return;
            int mid = (l+r)/2;
            insert_into_bst(root,v[mid]);
            sort_array(v,l,mid-1);
            sort_array(v,mid+1,r);
        }
        TreeNode* sortedArrayToBST(vector<int>& v) {
            sort_array(v,0,v.size()-1);
            return root;
        }
    };