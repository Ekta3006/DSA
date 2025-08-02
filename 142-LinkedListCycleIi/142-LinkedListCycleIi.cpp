// Last updated: 8/2/2025, 5:12:06 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      ListNode*slow=head,*fast=head,*e=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            while(slow != e) {               
                slow  = slow->next;
                e = e->next;
            }
        return e;
    }
    }
    return NULL;
    }
};