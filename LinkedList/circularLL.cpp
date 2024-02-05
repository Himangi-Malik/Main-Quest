//bc iss mein koi slow and fast waala scene bhi hai
//yeh waala brute froce approach hai, have to optimize it
if (head == NULL) {
      return true;
    } 

    if(head->next == NULL)
    return false;

    Node *temp = head->next;
    while(temp != NULL && temp!= head)
    {
        
        //if(temp->data == check)
        //return true;

        temp = temp-> next;
    }
    return (temp == head);
