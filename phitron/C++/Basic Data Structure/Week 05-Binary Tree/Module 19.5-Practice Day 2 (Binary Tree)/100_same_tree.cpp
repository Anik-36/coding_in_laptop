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
vector<int> v1;
vector<int> v2;
class Solution {
public:
   void preorder(TreeNode* root, int x){
       if(root == NULL) return;
       if(x == 1){
           v1.push_back(root->val);
       }else{
           v2.push_back(root->val);
       }
       preorder(root->left,x);
       preorder(root->right,x);
   }
   void inorder(TreeNode* root, int x){
       if(root == NULL) return;
       inorder(root->left,x);
       if(x == 1){
           v1.push_back(root->val);
       }else{
           v2.push_back(root->val);
       }
       inorder(root->right,x);
   }
   bool isSameTree(TreeNode* p, TreeNode* q) {
       v1.clear();
       v2.clear();
       preorder(p,1);
       preorder(q,2);
       for(auto a : v1){
           cout<<a<<" ";
       }
       cout<<endl;
       for(auto a : v2){
           cout<<a<<" ";
       }
       cout<<endl;
       if(v1==v2){
           v1.clear();
           v2.clear();
           inorder(p,1);
           inorder(q,2);
           for(auto a : v1){
               cout<<a<<" ";
           }
           cout<<endl;
           for(auto a : v2){
               cout<<a<<" ";
           }
           if(v1==v2){
               return true;
           }else return false;
       }else return false;
   }
};