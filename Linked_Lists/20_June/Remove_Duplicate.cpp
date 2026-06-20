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

Node* removeDuplicates(Node* head)
{
    if(head == NULL)
        return head;

    Node* temp = head;

    while(temp != NULL && temp->next != NULL)
    {
        if(temp->data == temp->next->data)
        {
            Node* duplicate = temp->next;

            temp->next = duplicate->next;

            if(duplicate->next)
            {
                duplicate->next->prev = temp;
            }

            delete duplicate;
        }
        else
        {
            temp = temp->next;
        }
    }

    return head;
}
