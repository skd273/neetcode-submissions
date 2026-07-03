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
    void reorderList(ListNode* head) {
        ListNode* slow=head;ListNode* fast=head;
        //find middle
        while(fast!=NULL&& fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;

        }
        ListNode* head2=slow->next;
        ListNode* prev=slow->next=NULL;
        // reverse
        while(head2!=NULL)
        {
            ListNode* next=head2->next;
            head2->next=prev;
            prev=head2;
            head2=next;
        }
        //merge
        ListNode*  first=head;
        ListNode* second=prev;

        while(second!=NULL)
        {
            ListNode* curr1=first->next;
            ListNode* curr2=second->next;

            first->next=second;
            second->next=curr1;
            first=curr1;
            second=curr2;
        }
    }
};
