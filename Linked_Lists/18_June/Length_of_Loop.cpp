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

int findLength(Node* meet)
{
    int cnt = 1;

    Node* temp = meet->next;

    while(temp != meet)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;
}

int lengthOfLoop(Node* head)
{
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        {
            return findLength(slow);
        }
    }

    return 0;
} 