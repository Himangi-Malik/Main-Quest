#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int data){

    Node* temp = new Node(data);

    temp -> next = head;
    head = temp;

}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
 
    tail -> next = temp;
    tail = temp; 

}

void insertAtPosition(Node* &head,Node* &tail, int position, int data){

    //insert at start 
    if(position == 1){
        insertAtHead(head, data);
        return;
    }



    Node* temp = head;
    int index = 1;

    while(index < position - 1){
        temp = temp->next;
        index++;
    }

    //insert at tail
    if(temp -> next == NULL)
    {
        insertAtTail(tail,data);
        return;
    }

    Node* newNode = new Node(data);

    newNode -> next = temp -> next;
    temp -> next = newNode;

}

void deleteNode(int position, Node* &head){

    //deleting first node 
    if(position ==1){
        Node* temp = head;
        head = head->next;

        delete temp;
    }

    else{
        Node* current = head;
        Node* prev = NULL;

        int count = 1;
        while(count < position){
            prev = current;
            current = current -> next;
            count++;
        }
        //deleting at tail and making pointer correct
        if(current-> next == NULL){
            //iss mein tail bhi pass kar dena and then usse tail ko prev
            //mein daal dena and usse kaam ho jaayega

        }
        prev -> next = current -> next;
        current -> next = NULL;
        cout << "deleting " << current-> data<< endl;
        delete current;

    }

}

void print (Node* &head){
    Node* temp = head;

    while(temp != NULL){
    cout << temp -> data << " ";
    temp = temp -> next;
}

    cout << endl;
}

int main()
{
    //dynamically create
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 12); 
    print(head);

    insertAtTail(tail, 15); 
    print(head);

    insertAtPosition(head,tail, 2, 11);
    print (head);

    insertAtPosition(head,tail, 4, 14);
    print (head);

    insertAtPosition(head,tail, 6 , 20);
    print (head);
    cout << tail->data <<endl;

    deleteNode(3,head);
    print(head);

    //insertAtHead(head,12);
    //print (head);

    //insertAtHead(head,15);
    //print (head);

    //cout << node1 -> data << endl;
    //cout << node1 -> next << endl;


    return 0;

}
