#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//Creating Node using Class
class
{
    public:
    int data;
    node*next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
    // Destractor............
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for the node with data"<<" "<< value << endl;
    }
};
//Function Calling
node* reverseLinkedList(node*head)
{
    node*prev=NULL;
    node*curr=head;

    //For empty List
    if(head==NUll && head->next==NULL)
    {
        return head;
    }
    node*prev=NULL;
    node*curr=head;
    node*foroward=NULL;

    while(curr!=NULL)
    {
        foroward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

int main()
{
    
    return 0;
}