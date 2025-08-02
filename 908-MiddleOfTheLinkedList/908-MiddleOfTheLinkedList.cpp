// Last updated: 8/2/2025, 5:11:13 PM
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
    ListNode* middleNode(ListNode* head) {
     ListNode*curr=head;
        int c=1;
        while(curr->next!=NULL)
        {
            c++;
            curr=curr->next;
        }
        curr=head;
        if(c%2==0)
            c=c/2;
        else
            c=(c-1)/2;
        for(int i=0;i<c;i++)
        {
            curr=curr->next;
        }
        return curr;
    }
};