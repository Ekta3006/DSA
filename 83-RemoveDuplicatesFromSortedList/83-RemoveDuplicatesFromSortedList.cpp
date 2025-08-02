// Last updated: 8/2/2025, 5:12:23 PM
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
        if(head==NULL)
 return NULL;
 if(head->next==NULL)
 return head;
 ListNode*curr=head;
 while(curr->next!=NULL){
     if(curr->val==curr->next->val)
         curr->next=curr->next->next;
         else
     curr=curr->next;
 }
 return head;
        
    }
};