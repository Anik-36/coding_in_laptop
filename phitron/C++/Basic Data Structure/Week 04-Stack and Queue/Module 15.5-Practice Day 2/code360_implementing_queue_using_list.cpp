/*https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTabValue=PROBLEM*/


#include <bits/stdc++.h>
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Queue {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    Queue() {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(sz == 0) return true;
        else return false;
    }

    void enqueue(int val) {
        // Implement the enqueue() function
        sz++;
        Node * newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        return;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(head == NULL){
            return -1;
        }
        sz--;
        int x = head->val;
        Node * deleteNode = head;
        head = head->next;
        delete deleteNode;
        return x;
    }

    int front() {
        // Implement the front() function
        if(head == NULL) return -1;
        return head->val;
    }
};