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
