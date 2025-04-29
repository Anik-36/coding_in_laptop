/**
 *
 * https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/
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
        vector tree_array(TreeNode * root){
            queue<TreeNode * > q1;
            vector<int> v;
            if(root){
                q1.push(root);
                v.push_back(root->val);
            }
            while(!q1.empty()){
                TreeNode * p = q1.front();
                q1.pop();

                if(p.left){
                    q1.push(p.left);
                    v.push_back(p.left->val);
                }
                if(p.right){
                    q1.push(p.right);
                    v.push_back(p.right->val);
                }
            }
            return v;

        }
        bool findTarget(TreeNode* root, int k) {
            vector<int> v = tree_array(root);
            sort(v.begin(),v.end());
            for(int val : v){
                cout<<val<<" ";
            }
            int i = 0;
            int j = v.size()-1;
            bool flag = false;
            while(i<j){
                if(v[i]+v[j] == k){
                    flag = true;
                    break;
                }else if(v[i]+v[j]<k){
                    i++;
                }else if(v[i]+v[j]>k){
                    j++;
                }
            }
            return flag;
        }
    };