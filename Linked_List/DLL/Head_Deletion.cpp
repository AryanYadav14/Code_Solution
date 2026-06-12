Node* deleteHead(Node* head)
{
    // Empty DLL
    if(head == NULL)
        return NULL;

    // Only one node
    if(head->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node* temp = head;

    head = head->next;

    head->prev = NULL;

    temp->next = NULL;

    delete temp;

    return head;
}