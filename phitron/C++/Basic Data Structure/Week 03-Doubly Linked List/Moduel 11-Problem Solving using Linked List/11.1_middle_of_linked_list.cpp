/*
https://leetcode.com/problems/middle-of-the-linked-list/description/
*/

class Solution {
    public:
        int size(ListNode * head){
            ListNode * tmp = head;
            int ct = 0;
            while(tmp != NULL){
                ct++;
                tmp = tmp->next;
            }
            return ct;
        }
        ListNode* middleNode(ListNode* head) {
            int sz = size(head);
            ListNode * tmp = head;
            for(int i = 1; i<=sz/2; i++){
                tmp = tmp->next;
            }
            return tmp;
        }
    };