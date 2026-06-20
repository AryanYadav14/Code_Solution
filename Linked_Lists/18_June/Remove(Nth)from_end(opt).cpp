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

Node* removeNthFromEnd(Node* head, int n)
{
    Node* fast = head;
    Node* slow = head;

    // Move fast n steps ahead
    for(int i = 0; i < n; i++)
    {
        fast = fast->next;
    }

    // Delete head case
    if(fast == NULL)
    {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }

    // Move both pointers together
    while(fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }

    Node* delNode = slow->next;

    slow->next = slow->next->next;

    delete delNode;

    return head;
}