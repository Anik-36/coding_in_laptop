/*https://www.naukri.com/code360/problems/code-find-a-node_5682?leftPanelTabValue=PROBLEM*/

/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    queue<BinaryTreeNode<int> * > q;
    q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int> * p = q.front();
        q.pop();
        if(p->data == x) return true;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return false;
}