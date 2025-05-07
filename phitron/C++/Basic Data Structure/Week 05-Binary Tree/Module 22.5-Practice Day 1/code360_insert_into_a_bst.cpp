//https://www.naukri.com/code360/problems/insert-into-a-binary-search-tree_1279913
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left, *right;
        TreeNode() : val(0), left(NULL), right(NULL) {}
        TreeNode(T x) : val(x), left(NULL), right(NULL) {}
        TreeNode(T x, TreeNode<T> *left, TreeNode<T> *right) : val(x), left(left), right(right) {}
    };


************************************************************/


void insert_bst(TreeNode<int> * &root, int val){
    if (root == NULL) {
        root = new TreeNode(val);
        return;
    } else if (val < root -> val) {
        if (root -> left == NULL) {
            root -> left = new TreeNode<int>(val);
            return;
        } else {
            insert_bst(root -> left,val);
        }
    } else {
        if (root -> right == NULL) {
            root -> right = new TreeNode<int>(val);
            return;
        } else {
            insert_bst(root -> right,val);
        }
    }
}

TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    // Write your code here.
    insert_bst(root,val);
    return root;
}
