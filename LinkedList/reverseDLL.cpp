
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    Node* current = head;
    Node* forward = head->next;
    Node* behind = NULL;


    while(forward!= NULL)
    {
        //cout << forward -> data << " " << current-> data << endl;
     
        Node* temp = current -> next;
    
        current -> next = current -> prev;
       // cout << current -> next  << endl;
        
        current -> prev = temp;
        //cout << current -> prev  << endl;
        behind = current;
        current = forward;
        forward = forward-> next;
    }
    current-> prev = NULL;
    current -> next = behind;
    return current;
}

