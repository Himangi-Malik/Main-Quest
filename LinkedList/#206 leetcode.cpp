class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;

        while(head != NULL){
            head = head->next;
            curr->next = prev;
            prev = curr;
            curr = head;
            
        }
        return prev;
    }
};

//approach 2 (recursion is confusing)
//i choose to ignore the recursive approach
//if i wish to reconsidr i should check out lecture 45
