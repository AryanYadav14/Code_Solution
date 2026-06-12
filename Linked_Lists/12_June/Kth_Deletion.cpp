Node* deleteKthNode(Node* head, int k)
{
    if(head == NULL)
        return NULL;

    Node* temp = head;
    int cnt = 1;

    while(temp != NULL)
    {
        if(cnt == k)
            break;

        cnt++;
        temp = temp->next;
    }

    if(temp == NULL)
        return head;   // k > length

    Node* back = temp->prev;
    Node* front = temp->next;

    // Only node
    if(back == NULL && front == NULL)
    {
        delete temp;
        return NULL;
    }

    // Head node
    if(back == NULL)
    {
        head = front;
        front->prev = NULL;

        temp->next = NULL;
        delete temp;

        return head;
    }

    // Tail node
    if(front == NULL)
    {
        back->next = NULL;

        temp->prev = NULL;
        delete temp;

        return head;
    }

    // Middle node
    back->next = front;
    front->prev = back;

    temp->next = NULL;
    temp->prev = NULL;

    delete temp;

    return head;
}