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

Node* sort012(Node* head)
{
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    Node* temp = head;

    // Count 0s, 1s, and 2s
    while (temp != NULL)
    {
        if (temp->data == 0)
            cnt0++;
        else if (temp->data == 1)
            cnt1++;
        else
            cnt2++;

        temp = temp->next;
    }

    temp = head;

    // Fill 0s
    while (cnt0)
    {
        temp->data = 0;
        cnt0--;
        temp = temp->next;
    }

    // Fill 1s
    while (cnt1)
    {
        temp->data = 1;
        cnt1--;
        temp = temp->next;
    }

    // Fill 2s
    while (cnt2)
    {
        temp->data = 2;
        cnt2--;
        temp = temp->next;
    }

    return head;
}

void printList(Node* head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(2);
    head->next->next->next->next->next = new Node(0);

    head = sort012(head);

    printList(head);

    return 0;
}