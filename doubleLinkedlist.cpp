#include <bits/stdc++.h>

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
    ~node()
    {
        int val=this->data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data"<<val<<endl;
    }
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
void insertAthead(node *&tail, node *&head, int d)
{
    if(head==NULL)
    {
        node*temp=new node(d);
        head=temp;
        tail=temp;
    }
    else
    {
        node *temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    
}
// Insert at Tail
void insertAtTail(node *&tail, node *&head, int d)
{
    if(tail==NULL)
    {
        node*temp=new node(d);
        head=temp;
        tail=temp;
    }
    else
    {
        node *temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// Insert at Position
void insertAtPosition(node *&tail, node *&head, int position, int d)
{
    // Insert at Head
    if (position == 1)
    {
        insertAthead(tail,head, d);
        return;
    }

    node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // Insert at Tail
    if (temp->next == NULL)
    {
        insertAtTail(tail,head, d);
        return;
    }

    // Insert at middle
    node *nodetobeInserted = new node(d);

    nodetobeInserted->next = temp->next;
    temp->next->prev = nodetobeInserted;
    temp->next = nodetobeInserted;
    nodetobeInserted->prev = temp;
}
// Deelt from head
void delet(int position, node* &head)
{
        if(position==1)
        {
            node*temp=head;
            temp->next->prev=NULL;
            head=temp->next;
            temp->next=NULL;
            delete temp;
        }

    //Deleting from any node or Tail
    else
    {
        node* curr=head;
        node* prev=NULL;

        int cnt=1;
        while (cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;

        delete curr;
    }
}

// Main function
int main()
{
    node *head = NULL;
    node *tail = NULL;
    print(head);

    // Insertion
    insertAthead(tail,head, 11);
    print(head);
    insertAthead(tail, head, 12);
    print(head);
    insertAthead(tail, head, 13);
    print(head);
    insertAthead(tail, head, 14);
    print(head);
    insertAthead(tail, head, 15);
    print(head);
    insertAtTail(tail, head, 22);
    print(head);
    insertAtTail(tail, head, 25);
    print(head);
    insertAtTail(tail, head, 26);
    print(head);
    insertAtTail(tail, head, 28);
    print(head);
    insertAtPosition(tail, head, 4, 30);
    print(head);
    delet(1,head);
    print(head);
    delet(6, head);
    print(head);
    cout << " The Length of the Linked-List is..." << getlength(head) << endl;
    return 0;
}
