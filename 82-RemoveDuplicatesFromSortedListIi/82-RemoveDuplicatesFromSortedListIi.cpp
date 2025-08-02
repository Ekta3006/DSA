// Last updated: 8/2/2025, 5:12:24 PM
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        
        while(head != NULL && head->next != NULL) {
            // if values are equal
            if(head->next != NULL && head->val == head->next->val) {
                // To skip some duplicate values
                while(head->next != NULL && head->val == head->next->val) {
                    head = head->next;
                }
                prev->next = head->next;
            } else {
                prev = prev->next;
            }
            head = head->next;
        }
        
        return dummy->next;
    }
};