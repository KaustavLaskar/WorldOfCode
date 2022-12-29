#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void mergeLinkedList(node *head1, node *head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummyNode = new node(-1);
    node *p3 = dummyNode;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummyNode;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    int arr1 = {1, 2, 4, 5, 7};
    int arr2 = {2, 3, 6};

    for (int i = 0; i <)
        return 0;
}