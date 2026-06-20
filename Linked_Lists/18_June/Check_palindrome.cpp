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

Node* reverseLL(Node* head)
{
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL)
    {
        Node* front = curr->next;

        curr->next = prev;

        prev = curr;
        curr = front;
    }

    return prev;
}

bool isPalindrome(Node* head)
{
    if(head == NULL || head->next == NULL)
        return true;

    Node* slow = head;
    Node* fast = head;

    // Find first middle
    while(fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    Node* newHead = reverseLL(slow->next);

    Node* first = head;
    Node* second = newHead;

    // Compare both halves
    while(second != NULL)
    {
        if(first->data != second->data)
            return false;

        first = first->next;
        second = second->next;
    }

    return true;
}