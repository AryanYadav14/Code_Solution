#include <iostream>
#include <vector>
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

Node* oddEvenList(Node* head)
{
    if(head == NULL)
        return head;

    vector<int> arr;

    Node* temp = head;

    // Odd indices
    while(temp != NULL && temp->next != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next->next;
    }

    if(temp)
        arr.push_back(temp->data);

    // Even indices
    temp = head->next;

    while(temp != NULL && temp->next != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next->next;
    }

    if(temp)
        arr.push_back(temp->data);

    // Rewrite LL
    temp = head;
    int i = 0;

    while(temp != NULL)
    {
        temp->data = arr[i];
        i++;
        temp = temp->next;
    }

    return head;
}
