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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return NULL;
        if(head->next==NULL)
        {
            if(n==1)
            {
                delete head;
                return NULL;
            }
        }
        // now first get the linked list length
        int linkedlength=1;
        ListNode* temp=head;
        while(temp->next!=NULL)
        {
            linkedlength++;
            temp=temp->next;
        }
        int backlen=linkedlength-n;
        if(backlen==0)
        {
            // means we have to delete head;
            ListNode* newhead=head->next;
            delete head;
            return newhead;
        }
        int cnt=0;
        ListNode* back=head;
        while(back!=NULL)
       {
        cnt++;
        if(cnt==backlen)
        {
            break;
        }
        back=back->next;
       }
       ListNode* tempdel=back->next;
       back->next=back->next->next;
       delete tempdel;
       return head;


    }
};