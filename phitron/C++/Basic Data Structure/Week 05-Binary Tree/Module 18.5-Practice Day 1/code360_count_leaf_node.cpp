/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };

***********************************************************/
int count_leaf(BinaryTreeNode<int> * root){
    if(root == NULL) return 0;
    if(root->left == NULL and root->right == NULL) return 1;
    int l = count_leaf(root->left);
    int r = count_leaf(root->right);
    return l+r;
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int l = count_leaf(root);
    return l;
}