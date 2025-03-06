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
        int size_list(ListNode * head){
            ListNode * tmp = head;
            int ct = 0;
            while(tmp != NULL){
                ct++;
                tmp = tmp->next;
            }
            return ct;
        }
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            int sz = size_list(head);
            int l = sz - n;
            ListNode * tmp = head;
            if(l == 0){
                head = head->next;
                delete tmp;
                return head;
            }
            for(int i = 1; i<l ; i++){
                tmp = tmp->next;
            }
            ListNode * deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deleteNode;
            return head;
        }
    };