/*
https://leetcode.com/problems/middle-of-the-linked-list/
slow and fast method
*/

class Solution {
    public:
        ListNode* middleNode(ListNode* head) {
            ListNode * slow = head;
            ListNode * fast = head;
            while(fast != NULL and fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow;
        }
    };