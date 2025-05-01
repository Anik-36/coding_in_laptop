//https://www.naukri.com/code360/problems/insert-into-a-binary-search-tree_1279913

// TreeNode class structure:
class TreeNode {
    constructor(val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
};

void insert_bst(TreeNode * &root, int val){
    if (root == NULL) {
        root = new TreeNode(val);
        return;
    } else if (val < root -> val) {
        if (root -> left == NULL) {
            root -> left = new TreeNode(val);
            return;
        } else {
            insert_bst(root -> left);
        }
    } else {
        if (root -> right == NULL) {
            root -> right = new TreeNode(val);
            return;
        } else {
            insert_bst(root -> right);
        }
    }
}

function insertionInBST(root, val) {
    // Write your code here.
    return insert_bst(root, val);
}

module.exports.insertionInBST = insertionInBST;
