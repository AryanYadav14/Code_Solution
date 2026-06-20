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

Node* findNthNode(Node* head, int n)
{
    while(--n)
    {
        head = head->next;
    }

    return head;
}

Node* rotateRight(Node* head, int k)
{
    if(head == NULL || head->next == NULL || k == 0)
        return head;

    int len = 1;
    Node* tail = head;

    while(tail->next != NULL)
    {
        len++;
        tail = tail->next;
    }

    k = k % len;

    if(k == 0)
        return head;

    tail->next = head;

    Node* newLastNode = findNthNode(head, len - k);

    head = newLastNode->next;

    newLastNode->next = NULL;

    return head;
}

