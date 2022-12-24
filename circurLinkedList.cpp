#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// Function Calling........
class node
{
public:
    int data;
    node *next;
    // Constructor...........
    node(int d)
    {
        this->data = d;
        this->next = NULL;
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
        cout << "Memory is free for the node with data" <<" "<< value << endl;
    }
};
// Print of node...............
void print(node *tail)
{
    node *temp = tail;
    if(tail==NULL)
    {
        cout<<"The list is empty......"<<endl;
    }
    // We use do-while loop because if there is single element then while loop doesn't execute.
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
// Insert Node at Circular Linked_List.............
void insertNode(node *&tail, int element, int d)
{
    // Empty list
    if (tail == NULL)
    {
        node *node1 = new node(d);
        tail = node1;
        node1->next = node1;
    }
    else
    {
        // Non Empty List.........
        node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
// Deelltion of Node
void deletNode(node *&tail, int value)
{
    // For Empty Lsit
    if (tail == NULL)
    {
        cout << "List is empty..please Check!!!"<<endl;
        return;
    }
    // For Non-empty list
    else
    {
        node *prev = tail;
        node *curr = prev->next;
        

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // For 1-node in Linked_List

        if(curr=prev)
        {
            tail=NULL;
        }
        // For >=2 node in Linked_List
        else if(tail==curr)
        {
            tail=prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
// Main Programmiing....
int main()
{
    node *tail = NULL;

    // Empty list insert
    insertNode(tail, 5, 3);
    print(tail);
/*
    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 10);
    print(tail);

    insertNode(tail, 10, 5);
    print(tail);

    insertNode(tail, 5, 5);
    print(tail);*/

    deletNode(tail,3);
    print(tail);
    return 0;
}