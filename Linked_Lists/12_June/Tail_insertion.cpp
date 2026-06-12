Node* insertTail(Node* head, int val)
{
    Node* newNode = new Node(val);

    // Empty DLL
    if(head == NULL)
        return newNode;

    Node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}