//very easy sawal, i did very quickly
Node* sortList(Node *head){
    // Write your code here.
    int arr[] = {0,0,0};
    Node* temp = head;
    while(temp!= NULL){
        if(temp->data == 0)
        arr[0]++;

        else if(temp->data == 1)
        arr[1]++;

        else
        arr[2]++;

        temp = temp->next;
    }

    //ab allocation ka algo likhenge ham ache se thanks 
    temp = head;
    for (int i = 0; i < 3; i++) {
        while(arr[i]!= 0){
            temp->data = i;
            arr[i]--;
            temp = temp->next;
        }
    }
    return head;
}




//APPROACH 2
void insertAtTail(Node* &tail, Node* &temp){
    tail->next = temp;
    tail = temp;
}


Node* sortList(Node *head){
    // Write your code here.
    // ab second approach try karenge ham ache se
    Node* zeroHead = new Node(-1);//dummy node
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    
    Node* temp = head;
 
    // separate lists are created
    while(temp!= NULL){
        if(temp-> data == 0)
        {
            insertAtTail(zeroTail, temp);
        }

        else if(temp-> data == 1)
        {
            insertAtTail(oneTail, temp);
        }

        else
        {
            insertAtTail(twoTail, temp);
        }
        temp = temp->next;
    }

    //merging the lists togther
    if(oneHead->next!= NULL)
    {
        zeroTail->next = oneHead-> next;
    }
    else
    zeroTail->next = twoHead->next;

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;

    delete zeroHead; 
    delete oneHead; 
    delete twoHead; 


    return head;

}
