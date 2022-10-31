#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;

    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

struct LinkedList
{
    node*head;
    LinkedList()
    {
        head=NULL;
    }
    void reverse()
    {
       node*current =head;
       node*prev=NULL;
       node*next=NULL;

       while(current!=NULL)
       {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
       }
       head=prev;
    }
    void print()
    {
        struct node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

    void push(int data)
    {
        node*temp=new node(data);
        temp->next=head;
        head=temp;
    }
};

int main()
{
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);

    cout << "Given linked list\n";
    ll.print();

    ll.reverse();

    cout << "\nReversed linked list \n";
    ll.print();
    return 0;
}