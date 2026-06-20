#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* mergeLists(Node* head1, Node* head2)
{
    Node* dummy = new Node(-1);
    Node* tail = dummy;

    Node* t1 = head1;
    Node* t2 = head2;

    while(t1 != NULL && t2 != NULL)
    {
        if(t1->data <= t2->data)
        {
            tail->next = new Node(t1->data);
            t1 = t1->next;
        }
        else
        {
            tail->next = new Node(t2->data);
            t2 = t2->next;
        }

        tail = tail->next;
    }

    while(t1 != NULL)
    {
        tail->next = new Node(t1->data);
        tail = tail->next;
        t1 = t1->next;
    }

    while(t2 != NULL)
    {
        tail->next = new Node(t2->data);
        tail = tail->next;
        t2 = t2->next;
    }

    return dummy->next;
}