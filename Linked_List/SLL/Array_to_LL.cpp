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

int main()
{
    vector<int> arr = {12, 5, 6, 8};

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i = 1; i < arr.size(); i++)
    {
        Node* newNode = new Node(arr[i]);

        temp->next = newNode;
        temp = newNode;
    }

    // Print the linked list
    temp = head;

    while(temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}