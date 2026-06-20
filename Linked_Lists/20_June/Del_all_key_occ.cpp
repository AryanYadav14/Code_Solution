#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;

    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node* deleteAllOccurrences(Node* head, int key)
{
    Node* temp = head;

    while(temp != NULL)
    {
        if(temp->data == key)
        {
            Node* nextNode = temp->next;
            Node* prevNode = temp->prev;

            if(temp == head)
            {
                head = head->next;
            }

            if(nextNode)
            {
                nextNode->prev = prevNode;
            }

            if(prevNode)
            {
                prevNode->next = nextNode;
            }

            delete temp;
            temp = nextNode;
        }
        else
        {
            temp = temp->next;
        }
    }

    return head;
}
