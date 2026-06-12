Node* insertHead(Node* head, int val)
{
    Node* newNode = new Node(val);

    // Empty DLL
    if(head == NULL)
        return newNode;

    newNode->next = head;
    head->prev = newNode;

    return newNode;
}