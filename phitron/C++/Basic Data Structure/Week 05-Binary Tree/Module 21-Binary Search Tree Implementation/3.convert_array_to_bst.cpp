#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
class Node{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
Node * input_tree(){
    int val;
    cin>>val;
    Node * root;
    if(val == -1){
        root = NULL;
    }else{
        root = new Node(val);
    }
    queue<Node *> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node * p = q.front();
        q.pop();

        Node * myLeft, * myRight;
        int l,r;
        cin>>l>>r;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        if(myLeft) p->left = myLeft;
        if(myRight) p->right = myRight;

        if(myLeft) q.push(myLeft);
        if(myRight) q.push(myRight);
    }
    return root;
}
void level_order(Node * root){
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        // front ber korte hobe
        Node * f = q.front();
        q.pop();

        // ja iccha kaj kore nite hobe
        cout<<f->val<<" ";

        // or child gula add korte hobe
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);

    }
}
Node * convert(int a[], int n, int l, int r){
    if(l>r){
        return NULL;
    }
    int mid = (l+r)/2;
    Node * root = new Node(a[mid]);
    Node * leftRoot = convert(a,n,l,mid-1);
    Node * rightRoot = convert(a,n,mid+1,r);

    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    Node * root = convert(a,n,0,n-1);
    level_order(root);
}