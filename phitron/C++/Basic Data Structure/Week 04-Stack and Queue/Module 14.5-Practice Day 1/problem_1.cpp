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
        Node* prev;
        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
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
            newNode->prev = tail;
            tail = newNode;
        }
        int size(){
            return sz;
        }
        void pop(){
            Node * deleteNode = tail;
            tail = tail->prev;
            if(tail == NULL){
                head = NULL;
                return;
            }
            tail->next = NULL;
            delete deleteNode;
        }
        int top(){
            int k = tail->val;
            pop();
            return k;
        }
};
int main(){
    int n;
    cin>>n;
    myStack st1;
    while(n--){
        int x;
        cin>>x;
        st1.push(x);
    }
    int m;
    cin>>m;
    myStack st2;
    while(m--){
        int x;
        cin>>x;
        st2.push(x);
    }
    bool flag = true;

    if(st1.size() == st2.size()){
        m = st1.size();
        while(m--){
            if(st1.top() != st2.top()){
                flag = false;
                break;
            }
        }
        if(flag == true) yes
        else no
    }else no
}