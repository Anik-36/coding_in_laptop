/**
 * https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
 * 
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
        ListNode* swapNodes(ListNode* head, int k) {
            int sz = size_list(head);
            int f = k-1;
            int s = sz - k;
            ListNode * tmp1 = head;
            for(int i = 1; i<=f; i++){
                tmp1 = tmp1->next;
            }
            int store = tmp1->val;

            ListNode * tmp2 = head;
            for(int i = 1; i<=s; i++){
                tmp2 = tmp2->next;
            }
            tmp1->val = tmp2->val;
            tmp2->val = store;
            return head;
        }
    };