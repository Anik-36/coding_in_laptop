#include <bits/stdc++.h>
// Implement class for minStack.
class Node{
	public:
	int val;
	Node * next;
	Node * prev;
	Node(int val){
		this->val = val;
		this->next = NULL;
		this->prev = NULL;
	}
};
class minStack
{
	// Write your code here.
	public:
	Node * head = NULL;
	Node * tail = NULL;
	Node * head2 = NULL;
	Node * tail2 = NULL;

		// Constructor
		minStack()
		{
			// Write your code here.
		}

		// Function to add another element equal to num at the top of stack.
		void push(int val)
		{
			// Write your code here.
			Node * newNode = new Node(val);
			if(head == NULL and head2 == NULL){
				head = newNode;
				head2 = newNode;
				tail = newNode;
				tail2 = newNode;
				cout<<" head er kaj hoice"<<endl;
				return;
			}
			if(val<=tail2->val){
				tail2->next = newNode;
				newNode->prev = tail2;
				tail2 = newNode;
			}
			tail->next = newNode;
			newNode->prev = tail;
			tail = newNode;
				cout<<" tail er kaj hoice"<<endl;
		}

		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(tail == NULL){
				return -1;
			}

			Node * deleteNode = tail;
			int x = tail->val;
			if(tail->val == tail2->val){
				Node * deleteNode2 = tail2;
				tail2 = tail2->prev;
				tail2->next = NULL;
				delete deleteNode2;
			}
			tail = tail->prev;
			tail->next = NULL;
			delete deleteNode;
			return x;
		}

		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(tail == NULL){
				return -1;
			}
			return tail->val;
		}

		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(tail2 == NULL) return -1;
			else return tail2->val;
		}
};