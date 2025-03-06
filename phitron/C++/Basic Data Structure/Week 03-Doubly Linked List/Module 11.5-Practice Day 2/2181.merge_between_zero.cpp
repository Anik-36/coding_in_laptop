/**
 * https://leetcode.com/problems/merge-nodes-in-between-zeros/description/
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
            ListNode * tmp = head->next;
            ListNode * newHead = NULL;
            ListNode * newTail = NULL;
            while(tmp->next != NULL){
                int sum = 0;
                while(tmp->val != 0){
                    sum += tmp->val;
                    tmp = tmp->next;
                }
                insert_tail(newHead,newTail,sum);
                if(tmp->next != NULL) tmp = tmp->next;
            }
            return newHead;
        }
    };