#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this-> data = d;
        this -> next = NULL;
        this -> next = NULL;

    }

};

void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);

    temp-> next = head;
    head->prev = temp;
    head = temp;
}

void deleteNode(Node* &head,  int position){

    //delete at start
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp->next;
        temp-> next = NULL;
        delete temp;
    }

    // deletion of middle waala bhi tha but honestly nhi karna mujhe
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp-> next;

    }
    cout << endl;
}

int getLength(Node* &head){
    Node* temp = head;

    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

int main()
{
    Node* newNode = new Node(10);
    Node* head = newNode;
    

    print(head);

    insertAtHead(head,5);
    print(head);

    insertAtHead(head,4);
    print(head);

    insertAtHead(head,3);
    print(head);

    deleteNode(head,1);
    print(head);

    //insert at tail maine nhi kiya
    //insert at middle bhi tha hogya tha mujhse aaram se

    return 0;

}     
