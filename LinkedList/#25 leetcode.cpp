//recursion nhi aati hai, recursion karni hai ache se
// forward -> next ka dhyaan rakhna hai ache se thanks
class Solution {
public:

    int checkLength(ListNode*head)
    {
        ListNode* temp = head;
        int i = 0;
        for(; temp!=NULL; i++)
        {
           temp = temp->next; 
        }
        return i;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        if (head == NULL || head->next ==NULL)
        return head;

        int length = checkLength(head);
        if (length < k)
        return head;
        
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *forward = NULL;

        int count = 0;
        while(count<k){
            forward = curr->next;
            curr-> next = prev;
            prev = curr;
            curr = forward;
            count++;
        }
        
        if(curr!= NULL)
        {
            head->next = reverseKGroup(curr,k);
        }
        return prev;       
    }
};
