// Last updated: 8/2/2025, 5:11:33 PM
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
    ListNode* swapNodes(ListNode* head, int K) {
        if(head==NULL)
return head;
        ListNode*curr=head;
        int num=1;
        while(curr->next!=NULL){
            curr=curr->next;
            num++;
        }
        if(K>num)
            return head;
ListNode *s=head;
int spos=1;
while(spos<K){
   s=s->next;
   spos++;
}
ListNode *first=head;
ListNode *last=head;
for(int i=0;i<K;i++){
   first=first->next;
}
while(first!=NULL){
   last=last->next;
   first=first->next;
}
int t=s->val;
s->val=last->val;
last->val=t;
return head;
    }
};