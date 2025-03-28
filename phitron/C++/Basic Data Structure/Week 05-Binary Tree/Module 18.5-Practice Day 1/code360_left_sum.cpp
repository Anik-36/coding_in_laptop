#include <bits/stdc++.h>
/*
	Tree Node class.

	class BinaryTreeNode
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/

long long sum(BinaryTreeNode<int> * root,long long s){
	if(root == NULL) return 0;
	if(root->left){
		s+=root->left->data;
		s = sum(root->left, s);
	}
	if(root->right){
		s = sum(root->right, s);
	}
	return s;
}
long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.
	long long s = 0;
	s = sum(root,s);
	return s;
}