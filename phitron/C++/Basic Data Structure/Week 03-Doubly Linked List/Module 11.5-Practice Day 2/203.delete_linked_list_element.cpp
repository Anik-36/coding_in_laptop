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
        ListNode* removeElements(ListNode* head, int val) {
            if(head == NULL){
                return head;
            }
            while(head->val == val){
                if(head->next == NULL){
                    head = NULL;
                    return head;
                }
                head->val = head->next->val;
                head->next = head->next->next;
            }
            ListNode * tmp = head;
            while(tmp->next != NULL){
                if(tmp->next->val == val){
                    tmp->next = tmp->next->next;
                }
                if(tmp->next == NULL){
                    return head;
                }
                if(tmp->next->val != val){
                    tmp = tmp->next;
                }
            }
            return head;
        }
    };