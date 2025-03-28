/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int height(TreeNode<int> * root){
    if(root == NULL) return 0;
    int l = height(root->left);
    int r = height(root->right);
    return max(l,r)+1;
}
int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    int h = height(root);
    return h;
}
