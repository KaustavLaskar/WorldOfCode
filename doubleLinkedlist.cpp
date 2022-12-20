#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// Creat a node in class
class node
{
public:
    int data;
    node *next;
    node *prev;

    // Constructor

    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    // Destructor
};
// Traversal of Linked-list
void print(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// Find the length of Linked-List
int getlength(node *head)
{
    int length = 0;
    node *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
// Inserrt nade at 1st Position
void insertAthead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
// Insert at Tail
void insertAtTail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
// Insert at Position
void insertAtPosition(node *&tail, node *&head, int position, int d)
{
    // Insert at Head
    if (position == 1)
    {
        insertAthead(head, d);
        return;
    }

    node* temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // Insert at Tail
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // Insert at middle
    node *nodetobeInserted = new node(d);

    nodetobeInserted->next = temp->next;
    temp->next->prev = nodetobeInserted;
    temp->next = nodetobeInserted;
    nodetobeInserted->prev = temp;
}
// Main function
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    print(head);

    // Insertion
    insertAthead(head, 11);
    print(head);
    insertAthead(head, 12);
    print(head);
    insertAthead(head, 13);
    print(head);
    insertAthead(head, 14);
    print(head);
    insertAthead(head, 15);
    print(head);
    insertAtTail(tail, 22);
    print(head);
    insertAtTail(tail, 25);
    print(head);
    insertAtTail(tail, 26);
    print(head);
    insertAtTail(tail, 28);
    print(head);
    insertAtPosition(tail, head, 4, 30);
    print(head);
    cout << " The Length of the Linked-List is..." << getlength(head) << endl;
    return 0;
}