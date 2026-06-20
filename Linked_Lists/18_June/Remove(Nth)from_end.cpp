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
    int cnt = 0;

    Node* temp = head;

    while(temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    if(cnt == n)
    {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }

    int res = cnt - n;

    temp = head;

    while(temp != NULL)
    {
        res--;

        if(res == 0)
            break;

        temp = temp->next;
    }

    Node* delNode = temp->next;

    temp->next = temp->next->next;

    delete delNode;

    return head;
}