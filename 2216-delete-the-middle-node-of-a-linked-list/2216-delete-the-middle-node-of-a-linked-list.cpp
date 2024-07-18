/**
 * Definition for singly-linked list.
 * struct ListListNode {
 *     int val;
 *     ListListNode *next;
 *     ListListNode() : val(0), next(nullptr) {}
 *     ListListNode(int x) : val(x), next(nullptr) {}
 *     ListListNode(int x, ListListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
       ListNode* slow=head;
       ListNode* fast=head;
       ListNode* beforemiddle=NULL;
       while(fast!=NULL && fast->next!=NULL)
       {
        beforemiddle=slow;
        slow=slow->next;
        fast=fast->next->next;
       }
       // slow denotes the middle ListNode
       // before middle denotes the ListNode before middle ListNode
       beforemiddle->next=slow->next;
       slow->next=NULL;
       delete slow;
       return head;
    }
};