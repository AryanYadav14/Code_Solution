Node* deleteTail(Node* head)
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

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    Node* back = temp->prev;

    back->next = NULL;

    temp->prev = NULL;

    delete temp;

    return head;
}