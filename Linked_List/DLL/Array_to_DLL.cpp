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

    Node(int data1, Node* next1, Node* prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }
};

Node* arrayToDLL(vector<int>& arr)
{
    if(arr.size() == 0)
        return NULL;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i], NULL, prev);

        prev->next = temp;

        prev = temp;
    }

    return head;
}

void printDLL(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    vector<int> arr = {1, 3, 2, 4};

    Node* head = arrayToDLL(arr);

    printDLL(head);

    return 0;
}