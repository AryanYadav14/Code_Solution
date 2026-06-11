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

Node* deleteKthNode(Node* head, int k)
{
    if(head == nullptr)
        return nullptr;

    // Delete the first node
    if(k == 1)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    Node* prev = nullptr;
    int cnt = 1;

    while(temp != nullptr)
    {
        if(cnt == k)
        {
            prev->next = temp->next;
            delete temp;
            break;
        }

        prev = temp;
        temp = temp->next;
        cnt++;
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

    int k = 2;

    head = deleteKthNode(head, k);

    return 0;
}