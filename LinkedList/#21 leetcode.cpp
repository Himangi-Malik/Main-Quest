//bc dobara aake dekhti hoon mai isko bc sawal solve hi nhi ho rha kamina
//i made it way too much complicated
 
class Solution {
public:
    ListNode* solve(ListNode* list1, ListNode* list2){
        ListNode* curr1 = list1;
        ListNode* for1 = NULL;
        ListNode* curr2 = list2;
        ListNode* for2 = NULL;
       // int count = 0;
        //haan bas yeh na kisi tarah infinite loop bann rha hai and i have to solve it
        while(curr2!= NULL && curr1!= NULL )
        {

            for1 = curr1->next;
            for2 = curr2->next;
            
            if( curr1->val <= curr2->val && curr2->val <= for1->val)
            {
                curr1->next = curr2;
                curr2->next = for1;
                curr2 = for2;
            }
            curr1 = curr1->next;
            //cout << count++ << endl;
        }

        return list1;
    
    }


    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = NULL;

        if(list1 == NULL)
        return list2;

        if(list2 == NULL)
        return list1;

        //decide which list is going to get started with
        if (list1-> val < list2 -> val)
        head = solve(list1, list2);

        else 
        head = solve(list2, list1);

        return head;
    } 

    
};


//aeevi mein hi bahut complex kardiya maine, easy sa to sawal tha
					// 😉😉😉😉Please upvote if it helps 😉😉😉😉
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       
	    // if list1 happen to be NULL
		// we will simply return list2.
        if(list1 == NULL)
            return list2;
		
		// if list2 happen to be NULL
		// we will simply return list1.
        if(list2 == NULL)
            return list1;
        
        ListNode * ptr = list1;
        if(list1 -> val > list2 -> val)
        {
            ptr = list2;
            list2 = list2 -> next;
        }
        else
        {
            list1 = list1 -> next;
        }
        ListNode *curr = ptr;
        
		// till one of the list doesn't reaches NULL
        while(list1 &&  list2)
        {
            if(list1 -> val < list2 -> val){
                curr->next = list1;
                list1 = list1 -> next;
            }
            else{
                curr->next = list2;
                list2 = list2 -> next;
            }
            curr = curr -> next;
                
        }
		
		// adding remaining elements of bigger list.
        if(!list1)
            curr -> next = list2;
        else
            curr -> next = list1;
            
        return ptr;
       
    }
};
