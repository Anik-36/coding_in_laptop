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
    void insert_tail(ListNode * &head,ListNode * &tail,int val){
        ListNode * newNode = new ListNode(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        return;
    }
    ListNode* mergeNodes(ListNode* head) {
        int sum = 0;
        ListNode* head2 = NULL;
        ListNode* tail2 = NULL;
        ListNode* tmp = head;
        while(tmp!=NULL){
            tmp = tmp->next;
            while(tmp!= NULL and tmp->val != 0){
                sum+=tmp->val;
                tmp= tmp->next;
            }
            if(tmp!=NULL) insert_tail(head2,tail2,sum);
            sum = 0;
        }
        return head2;
    }
};