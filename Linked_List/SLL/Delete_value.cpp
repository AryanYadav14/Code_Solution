#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

Node* deleteValue(Node* head, int value)
{
    if(head == nullptr)
        return nullptr;

    // If head itself contains the value
    if(head->data == value)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    Node* prev = nullptr;

    while(temp != nullptr)
    {
        if(temp->data == value)
        {
            prev->next = temp->next;
            delete temp;
            break;
        }

        prev = temp;
        temp = temp->next;
    }

    return head;
}



int main()
{
    vector<int> arr = {1, 8, 9, 3};

    Node* head = new Node(arr[0]);
    Node* tail = head;

    for(int i = 1; i < arr.size(); i++)
    {
        Node* newNode = new Node(arr[i]);
        tail->next = newNode;
        tail = newNode;
    }

    head = deleteValue(head, 9);
    
    return 0;
}