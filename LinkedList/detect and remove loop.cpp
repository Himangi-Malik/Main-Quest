/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/
void removal(Node* &start)
{
    Node* temp = start-> next;
    while(temp->next != start)
    {
        temp = temp-> next;
    }
    temp->next = NULL;

}



Node *removeLoop(Node *head)
{
   Node* slow = head;
   Node* fast = head;

        while(fast!= NULL )
        {
            if(fast->next == NULL)
            return head;
            if (fast->next->next == NULL)
            return head;

            slow = slow -> next;
            fast = fast->next->next;

            if(slow == fast)
            {
                slow = head;
                while(slow!= fast){
                    slow = slow->next;
                    fast = fast -> next;
    
                }
                removal(slow);
                return head;
            }
            
        }
        return head;

       
    
};
