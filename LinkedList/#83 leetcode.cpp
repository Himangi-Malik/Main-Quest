class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr= head;
        ListNode *forward = NULL;
        ListNode* temp = NULL;

        while (curr!= NULL)
        {
            
            if(curr->next == NULL)
            return head;

            forward = curr->next;

            if(curr->val == forward->val && curr!= NULL && forward != NULL)
            {
                
                forward = forward -> next;
                curr->next = forward;
                
            }
            else
            curr = curr -> next;
        }
     return head;   
    }
};
