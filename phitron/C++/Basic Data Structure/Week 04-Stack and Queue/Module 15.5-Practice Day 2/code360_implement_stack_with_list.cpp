/*https://www.naukri.com/code360/problems/implement-stack-with-linked-list_630475?leftPanelTabValue=PROBLEM*/

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    //Write your code here

public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    Stack()
    {
        //Write your code here
    }

    int getSize()
    {
        //Write your code here
        return sz;
    }

    bool isEmpty()
    {
        //Write your code here
        if(sz == 0) return true;
        else return false;
    }

    void push(int data)
    {
        //Write your code here
        sz++;
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode ;
        return;
    }

    void pop()
    {
        //Write your code here
        if(head == NULL) return;
        sz--;
        Node* tmp = head ;
        if(tmp->next == NULL){
            Node* deleteNode = tmp;
            head = NULL;
            tail = NULL;
            delete deleteNode;
            return;
        }
        while(tmp->next->next!=NULL){
            tmp = tmp->next;
        }
        Node* deleteNode = tmp->next;
        tmp->next = NULL;
        tail = tmp;
        delete deleteNode;
    }

    int getTop()
    {
        //Write your code here
        if(head == NULL) return -1;
        return tail->data;
    }
};