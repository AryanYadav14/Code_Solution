#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;

    Node(int data1)
    {
        data = data1;
        next = NULL;
        prev = NULL;
    }
};

Node* reverseDLL(Node* head)
{
    if(head == NULL || head->next == NULL)
        return head;

    Node* current = head;
    Node* newHead = NULL;

    while(current != NULL)
    {
        Node* front = current->next;

        current->next = current->prev;
        current->prev = front;

        newHead = current;

        current = front;
    }

    return newHead;
}

void printDLL(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node* head = new Node(1);

    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    cout << "Original DLL: ";
    printDLL(head);

    head = reverseDLL(head);

    cout << "Reversed DLL: ";
    printDLL(head);

    return 0;
}