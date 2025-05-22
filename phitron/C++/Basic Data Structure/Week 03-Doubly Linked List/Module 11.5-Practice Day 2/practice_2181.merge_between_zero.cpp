/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void insert(ListNode* &head,ListNode* &tail,int val){
        ListNode* newNode = new ListNode(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        return;
    }
    void copy_list(ListNode* &head,ListNode* &tail,int val){
        ListNode* newNode = new ListNode(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        return;
    }
    int sum_of_part(ListNode* head){
        int sum = 0;
        // ListNode* tmp = head;
        head = head->next;
        while(head->val !=0){
            sum+=head->val;
            head = head->next;
        }
        return sum;
    }
    ListNode* mergeNodes(ListNode* head) {
        ListNode* head2 = NULL;
        ListNode* tail2 = NULL;

        ListNode* headc = NULL;
        ListNode* tailc = NULL;
        ListNode* tmp = head;
        while(tmp != NULL){
            copy_list(headc,tailc,tmp->val);
            tmp = tmp->next;
        }
        while(headc != NULL){
            int val = sum_of_part(headc);
            insert(head2,tail2,val);
        }
        return head2;
    }
};