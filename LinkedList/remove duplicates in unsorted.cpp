#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/
//bc yeh to kuch bahut jyada bhayankar galat kar rhi mai
// haan samjh aa gya tha kya kar rhi and moreover tle isliye aa rha cuz system mein koi dikkat hogi
//mera system shayad slow hai, correct answer mein bhi tle dikha rha hai

Node *removeDuplicates(Node *head)
{
    Node* curr = head;
    //Node* forward = NULL;
    Node* prev = NULL;
    map <int , bool> visited;

    while(curr != NULL){
        //forward = curr -> next;
        //removal algo
        if(visited [curr-> data]==true && curr!= NULL)
        {
            prev->next = curr->next;
            curr = curr->next;
        } 
        else
        {
            visited[curr->data] = true;
            prev = curr;
            curr = curr -> next;
    
        }
    }
    return head;
}
