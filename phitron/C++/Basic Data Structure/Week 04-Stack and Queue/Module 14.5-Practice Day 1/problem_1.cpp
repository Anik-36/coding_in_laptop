/*

Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL to solve this problem.

Sample Input
Sample Output
5
10 20 30 40 50
5
10 20 30 40 50
YES
5
10 20 30 40 50
4
10 20 30 40
NO
5
10 20 30 40 50
5
50 40 30 20 10
NO

*/

#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
class myStack{
    public:
        Node * head = NULL;
        Node * tail = NULL;
        int sz = 0;

        void push(int val){
            sz++;
            Node * newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return ;
            }
            tail->next = newNode;
            tail = newNode;
        }
        int size(){
            return sz;
        }
        bool check(Node * head1, Node * head2){
            Node * tmp1 = head1;
            Node * tmp2 = head2;
        }
};
int main(){

}