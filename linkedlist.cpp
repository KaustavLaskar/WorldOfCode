#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAthead(node* &head, int d)
{
    // New Node Creation
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertAttail(node* &tail, int d)
{
    // creat new node
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtmiddle(node* &tail, node* &head, int position, int d)
{
    if(position==1)
    {
        insertAthead(head, d);
        return;
    }
    node*temp=head;
    int count=1;
    while (count<position-1)
    {
        temp=temp->next;
        count++;
    }

    if(temp->next==NULL)
    {
        insertAttail(tail,d);
        return;
    }
    node*nodeToInsert=new node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
    
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // creat a new node
    node *node1 = new node(10);

    // head to pointer node1
    node *head = node1;
    node *tail = node1;
    print(head);

    // print(head);

    insertAttail(tail, 18);
    print(head);

    insertAttail(tail, 15);
    print(head);

    insertAtmiddle(tail, head,3,22);
    print(head);

    insertAtmiddle(tail,head, 1, 220);
    print(head);

    return 0;
}