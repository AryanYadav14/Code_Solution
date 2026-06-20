#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

Node* addTwoNumbers(Node* head1, Node* head2)
{
    Node* t1 = head1;
    Node* t2 = head2;

    Node* dummy = new Node(-1);
    Node* curr = dummy;

    int carry = 0;

    while (t1 != NULL || t2 != NULL)
    {
        int sum = carry;

        if (t1)
            sum += t1->data;

        if (t2)
            sum += t2->data;

        Node* newNode = new Node(sum % 10);

        carry = sum / 10;

        curr->next = newNode;
        curr = curr->next;

        if (t1)
            t1 = t1->next;

        if (t2)
            t2 = t2->next;
    }

    if (carry)
    {
        Node* newNode = new Node(carry);
        curr->next = newNode;
    }

    return dummy->next;
}
