//KAHAN HO RHI HAI GALTI MEKO NHI MIL RHI
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1 = list1;
        //ListNode* prev1 = NULL;
        ListNode* for1 = NULL;

        ListNode* curr2 = list2;
        //ListNode* prev2 = NULL;
        ListNode* for2 = NULL;

        ListNode* head = list2;
        //agar pehla node hi list 2 mein add karna ho
            if(curr1 != NULL && curr2!= NULL && curr1->val <= curr2->val ){
                ListNode* head = list1;    
            }

        while(curr1 != NULL && curr2!= NULL){
            
            for1 = curr1->  next;
            for2 = curr2 -> next;

            if(curr1 -> val < curr2->val){
                curr1 -> next = curr2; 
                //curr1 = for1;
            }
            else if(curr1 -> val > curr2->val) {
                curr2-> next = curr1;
                curr1 -> next = for2;
                curr2 = for2;
                //curr1 = for1;
            }

        //equal values
            else {
                curr1->next = curr2;

            }
            curr1 = for1;

        }
        return list1;

        
    }
};
