/*need to solve*/
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string val;
    Node* prev;
    Node* next;
    Node(string val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class BrowserHistory {
public:
    Node* head;
    Node* tail;
    Node* current;

    BrowserHistory() {
        head = NULL;
        tail = NULL;
        current = NULL;
    }

    void insert(string address) {
        Node* newNode = new Node(address);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void visit(string address) {
        Node* tmp = head;
        while (tmp != NULL) {
            if (tmp->val == address) {
                current = tmp;
                cout << address << endl;
                return;
            }
            tmp = tmp->next;
        }
        cout << "Not Available" << endl;
    }

    void next() {
        if (current != NULL && current->next != NULL) {
            current = current->next;
            cout << current->val << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }

    void prev() {
        if (current != NULL && current->prev != NULL) {
            current = current->prev;
            cout << current->val << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }
};

int main() {
    BrowserHistory browser;
    string address;

    while (true) {
        cin >> address;
        if (address == "end") break;
        browser.insert(address);
    }

    int q;
    cin >> q;
    string command;

    while (q--) {
        cin >> command;

        if (command == "visit") {
            string addr;
            cin >> addr;
            browser.visit(addr);
        } else if (command == "next") {
            browser.next();
        } else if (command == "prev") {
            browser.prev();
        }
    }

    return 0;
}
