int length(ListNode* head){
    int len = 0;
    while(head != NULL){
        len++;
        head = head-> next;

    }
    cout<<len<<endl;
    return len;
}

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len = length(head);
        if(len/2==0){    
            for(int i =1; i<= len/2; i++)
                head = head -> next;
        }        
        else{
            for(int i = 1; i<= len/2;i++)
                head = head-> next;      

        }  
        return head;
    }
};

//second approach
ListNode* getMiddle(ListNode* head)
 {
    ListNode* fast = head->next;
    ListNode* slow = head;

    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL)
        fast = fast->next;

        slow = slow->next;
    }
    return slow;

 }
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      ListNode* ans = getMiddle(head);
      return ans;
        
    }
};
