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
