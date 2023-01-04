#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void removeDuplicates(node *start)
{
    node *ptr1, *ptr2, *dummy;
    ptr1 = start;

    while (ptr1 != NULL && ptr1->next != NULL)
    {
        ptr1 = ptr2;
        while (ptr2 != NULL)
        {
            if (ptr1->data == ptr2->next->data)
            {
                dummy = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete dummy;
            }
            else
            {
                ptr2 = ptr2->next;
            }
        }
        ptr1 = ptr1->next;
    }
}
void printList(node *start)
{
    node *temp = start;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    /* The constructed linked list is:
     10->12->11->11->12->11->10*/
    node *start = new node(10);
    start->next = new node(12);
    start->next->next = new node(11);
    start->next->next->next = new node(11);
    start->next->next->next->next = new node(12);
    start->next->next->next->next->next = new node(11);
    start->next->next->next->next->next->next = new node(10);

    printf("Linked list before removing duplicates ");
    printList(start);

    removeDuplicates(start);

    printf("Linked list after removing duplicates ");
    printList(start);
    return 0;
}
