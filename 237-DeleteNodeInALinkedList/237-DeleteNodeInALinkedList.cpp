// Last updated: 8/2/2025, 5:11:49 PM
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
    void deleteNode(ListNode* del) {
        
        while(del->next != NULL)
       {
           del->val = del->next->val;
            if(del->next->next == NULL)
            {
                del->next = NULL;
                break;
            }
           del=del->next;
           
       }
    }
};