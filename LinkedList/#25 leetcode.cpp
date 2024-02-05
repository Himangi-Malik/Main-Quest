// solution from someone else
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        ListNode* temp=head;
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        int n=0;
        while(temp!=0)
        {
            n++;
            temp=temp->next;
        }
        if(n<k)
        {
            return head;
        }
        int count=0;

        while(curr!=0 && count<k)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }

        if(curr!=NULL)
        {
            head->next=reverseKGroup(curr,k);
        }
        return prev;
    }
};
