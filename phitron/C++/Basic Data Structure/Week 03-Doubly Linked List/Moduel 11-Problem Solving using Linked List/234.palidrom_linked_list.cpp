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
        void insert_tail(ListNode * &head, ListNode * &tail, int val){
            ListNode * newNode = new ListNode(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return ;
            }
            tail->next = newNode;
            tail = newNode;
        }
        void reverse(ListNode * &head, ListNode * cur){
            if(cur->next == NULL){
                head = cur;
                return;
            }
            reverse(head,cur->next);
            cur->next->next = cur;
            cur->next = NULL;
        }
        bool isPalindrome(ListNode* head) {
            ListNode * head2 = NULL;
            ListNode * tail2 = NULL;
            ListNode * tmp = head;
            while(tmp != NULL){
                insert_tail(head2,tail2,tmp->val);
                tmp =tmp->next;
            }
            reverse(head2,head2);
            tmp = head;
            ListNode * tmp2 = head2;
            while(tmp != NULL){
                if(tmp->val != tmp2->val){
                    return false;
                }
                tmp = tmp->next;
                tmp2 = tmp2->next;
            }
            return true;
        }
    };